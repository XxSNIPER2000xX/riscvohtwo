#ifndef CPU_H
#define CPU_H

struct CPU {
    WORD pc;            // program counter
    BYTE sp;            // stack pointer

    BYTE r1, r2, r3;    // registers
    BYTE ps;            // process status (flags)
};

void cpu_reset(struct CPU *cpu) {
    cpu->pc = 0xFFFC;
    cpu->sp = 0x10;
    cpu->ps = 0x00;
    cpu->r1 = cpu->r2 = cpu->r3 = 0x00;
}

#endif
