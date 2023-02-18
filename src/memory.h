#ifndef MEMORY_H
#define MEMORY_H

#define MAX_MEM 65536

struct MEMORY {
    BYTE data[MAX_MEM];
};

void mem_init(struct MEMORY *mem) {
    for (unsigned short i = 0; i < MAX_MEM; i++)
        mem->data[i] = 0;
}  

#endif
