typedef unsigned char BYTE;
typedef unsigned short WORD;

struct CPU {
    WORD PC;            // program counter
    BYTE SP;            // stack pointer

    BYTE r1, r2, r3;    // registers
    BYTE PS;            // process status (flags)
};

int main(int argc, char** argv) {
    return 0;
}
