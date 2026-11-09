import java.io.File;
import java.io.PrintWriter;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;

public class ExportAllRTL8192EE extends GhidraScript {
    @Override
    public void run() throws Exception {
        File output = new File(getScriptArgs()[0]);
        output.mkdirs();
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);
        int observed = 0;
        int completed = 0;
        try (PrintWriter index = new PrintWriter(new File(output, "functions.tsv"))) {
            index.println("address\tname\tbody_bytes\tdecompiled\tfile");
            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext() && !monitor.isCancelled()) {
                Function function = functions.next();
                String file = String.format("function-%04x.c", function.getEntryPoint().getOffset());
                DecompileResults result = decompiler.decompileFunction(function, 30, monitor);
                boolean success = result.decompileCompleted();
                try (PrintWriter writer = new PrintWriter(new File(output, file))) {
                    writer.println("/* Ghidra pseudocode derived from the original 8051 firmware. */");
                    writer.println("/* Address " + function.getEntryPoint() + ", function " + function.getName() + " */");
                    writer.println(success ? result.getDecompiledFunction().getC() : "/* " + result.getErrorMessage() + " */");
                }
                index.println(function.getEntryPoint() + "\t" + function.getName() + "\t"
                    + function.getBody().getNumAddresses() + "\t" + success + "\t" + file);
                observed++;
                if (success) completed++;
            }
        } finally {
            decompiler.dispose();
        }
        println("OM_RTL8192EE_ALL functions=" + observed + " decompiled=" + completed);
    }
}
