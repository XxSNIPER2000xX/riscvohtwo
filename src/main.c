#include <stdio.h>

#include "globals.h"
#include "opcodes.h"
#include "cpu.h"
#include "memory.h"

int main(int argc, char** argv) {
    struct CPU cpu;
    struct MEMORY mem;
    cpu_reset(&cpu, &mem);
    // START --- INLINE PROGRAM
    mem.data[0xFFFC] = LI;
    mem.data[0xFFFD] = 0x69;
    // END --- INLINE PROGRAM
    cpu_exec(&cpu, &mem);
    printf("working!!\n");
    printf("r1: 0x%x\n", cpu.r1);
    return 0;
}
