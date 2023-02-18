#ifndef CPU_H
#define CPU_H

#include "globals.h"
#include "opcodes.h"
#include "memory.h"

struct CPU {
    WORD pc;            // program counter
    BYTE sp;            // stack pointer

    BYTE r1, r2, r3;    // registers
    BYTE ps;            // process status (flags)
};

void cpu_reset(struct CPU *cpu, struct MEMORY *mem) {
    cpu->pc = 0xFFFC;
    cpu->sp = 0x10;
    cpu->ps = 0x00;
    cpu->r1 = cpu->r2 = cpu->r3 = 0x00;

    mem_init(mem);
}

BYTE get_byte(struct CPU *cpu, struct MEMORY *mem) {
    BYTE data = mem->data[cpu->pc];
    cpu->pc++;

    return data;
}

void cpu_exec(struct CPU *cpu, struct MEMORY *mem) {
   BYTE instr = get_byte(cpu, mem);
   switch (instr) {
       case LI:
        BYTE val = get_byte(cpu, mem);
        cpu->r1 = val;
        
        if (cpu->r1 == 0)
            cpu->ps = 0b00000010;
        
        if ((cpu->r1 & 0b10000000) > 0)
            cpu->ps = 0b10000000;
        
        break;
       default:
        printf("instruction not handled: %d", instr);
        break;
   }
}

#endif
