#ifndef MEMORY_H
#define MEMORY_H

#include "globals.h"

 struct MEMORY {
    BYTE data[MAX_MEM];
};

void mem_init(struct MEMORY *mem) {
    for (WORD i = 0; i < MAX_MEM; i++)
        mem->data[i] = 0;
}

#endif
