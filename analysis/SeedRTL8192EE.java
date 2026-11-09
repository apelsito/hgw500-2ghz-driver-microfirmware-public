import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.mem.MemoryBlock;

public class SeedRTL8192EE extends GhidraScript {
    @Override
    public void run() throws Exception {
        for (MemoryBlock block : currentProgram.getMemory().getBlocks()) {
            if (block.isInitialized()) {
                block.setRead(true);
                block.setWrite(false);
                block.setExecute(true);
            }
        }
        long[] entries = {0x4000, 0x4003, 0x4013, 0x4023, 0x4043, 0x494d, 0x4908, 0x5ff5, 0x5ff6, 0x6039, 0x7028};
        for (long value : entries) {
            Address address = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(value);
            addEntryPoint(address);
            disassemble(address);
            if (getFunctionAt(address) == null) {
                createFunction(address, null);
            }
        }
        println("OM_RTL8192EE_SEEDED_8051_BASE_4000");
    }
}
