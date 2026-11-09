import java.io.File;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.List;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.mem.MemoryBlockSourceInfo;
import ghidra.program.model.symbol.Reference;

public class ExportRTL8192EE extends GhidraScript {
    @Override
    public void run() throws Exception {
        File output = new File(getScriptArgs()[0]);
        int functions = 0;
        int instructions = 0;
        try (PrintWriter writer = new PrintWriter(new File(output, "ghidra-inventory.tsv"))) {
            writer.println("entry\tname\tbody_bytes");
            FunctionIterator iterator = currentProgram.getFunctionManager().getFunctions(true);
            while (iterator.hasNext()) {
                Function function = iterator.next();
                writer.println(function.getEntryPoint() + "\t" + function.getName() + "\t" + function.getBody().getNumAddresses());
                functions++;
            }
        }
        try (PrintWriter writer = new PrintWriter(new File(output, "ghidra-instructions.tsv"))) {
            writer.println("address\tfile_offset\tbytes\tinstruction");
            InstructionIterator iterator = currentProgram.getListing().getInstructions(true);
            while (iterator.hasNext()) {
                Instruction instruction = iterator.next();
                Address address = instruction.getAddress();
                if (!address.getAddressSpace().equals(currentProgram.getAddressFactory().getDefaultAddressSpace())) {
                    continue;
                }
                StringBuilder hex = new StringBuilder();
                for (byte value : instruction.getBytes()) {
                    hex.append(String.format("%02x", value & 0xff));
                }
                writer.println(address + "\t" + (address.getOffset() - 0x4000 + 32) + "\t" + hex + "\t" + instruction);
                instructions++;
            }
        }
        try (PrintWriter writer = new PrintWriter(new File(output, "ghidra-references.tsv"))) {
            writer.println("from\tto\ttype");
            InstructionIterator iterator = currentProgram.getListing().getInstructions(true);
            while (iterator.hasNext()) {
                Instruction instruction = iterator.next();
                for (Reference reference : instruction.getReferencesFrom()) {
                    writer.println(reference.getFromAddress() + "\t" + reference.getToAddress() + "\t" + reference.getReferenceType());
                }
            }
        }
        try (PrintWriter writer = new PrintWriter(new File(output, "ghidra-memory.txt"))) {
            writer.println("language=" + currentProgram.getLanguageID());
            writer.println("compiler=" + currentProgram.getCompilerSpec().getCompilerSpecID());
            for (MemoryBlock block : currentProgram.getMemory().getBlocks()) {
                writer.println(block.getName() + " " + block.getStart() + ".." + block.getEnd() + " initialized=" + block.isInitialized());
                for (MemoryBlockSourceInfo source : block.getSourceInfos()) {
                    writer.println("source=" + source.getDescription());
                }
            }
            writer.println("functions=" + functions);
            writer.println("instructions=" + instructions);
        }
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        List<Long> selected = new ArrayList<>();
        if (getScriptArgs().length > 1) {
            for (String value : getScriptArgs()[1].split(",")) {
                selected.add(Long.parseLong(value, 16));
            }
        } else {
            long[] defaults = {0x494d, 0x4908, 0x464d, 0x5ff5, 0x5ff6, 0x6039, 0x7028, 0x4bf8, 0x4fce};
            for (long value : defaults) {
                selected.add(value);
            }
        }
        for (long value : selected) {
            Address address = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(value);
            Function function = getFunctionAt(address);
            if (function == null) {
                continue;
            }
            DecompileResults result = decompiler.decompileFunction(function, 30, monitor);
            try (PrintWriter writer = new PrintWriter(new File(output, String.format("function-%04x.c", value)))) {
                writer.println("/* Ghidra decompiler reconstruction. Original firmware bytes remain separate. */");
                writer.println("/* " + function.getEntryPoint() + " " + function.getName() + " */");
                writer.println(result.decompileCompleted() ? result.getDecompiledFunction().getC() : result.getErrorMessage());
            }
        }
        decompiler.dispose();
        println("OM_RTL8192EE_EXPORTED functions=" + functions + " instructions=" + instructions);
    }
}
