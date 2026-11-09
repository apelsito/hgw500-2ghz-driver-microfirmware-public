import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.mem.MemoryBlock;

public class SeedPublicRTL8192EE extends GhidraScript {
    @Override
    public void run() throws Exception {
        for (MemoryBlock block : currentProgram.getMemory().getBlocks()) {
            if (block.isInitialized()) {
                block.setRead(true);
                block.setWrite(false);
                block.setExecute(true);
            }
        }
        long[] offsets = {0, 3, 0x13, 0x23, 0x43};
        for (long offset : offsets) {
            Address vector = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(0x4000 + offset);
            if ((getByte(vector) & 0xff) != 2) {
                continue;
            }
            long targetValue = ((getByte(vector.add(1)) & 0xff) << 8) | (getByte(vector.add(2)) & 0xff);
            Address target = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(targetValue);
            addEntryPoint(vector);
            addEntryPoint(target);
            disassemble(vector);
            disassemble(target);
            if (getFunctionAt(vector) == null) {
                createFunction(vector, null);
            }
            if (getFunctionAt(target) == null) {
                createFunction(target, null);
            }
            println("OM_PUBLIC_RTL8192EE_VECTOR " + vector + " -> " + target);
        }
    }
}
