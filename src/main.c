#include <stdio.h>

#include "globals.h"
#include "cpu.h"
#include "memory.h"

int main(int argc, char** argv) {
    struct MEMORY *mem;
    struct CPU *cpu;
    cpu_reset(&cpu, &mem);
    printf("working!\n");
    return 0;
}
