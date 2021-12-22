#include <stdio.h>

struct Registers{
    unsigned char A;
    unsigned char B;
    unsigned char C;
    unsigned char D;
    unsigned char E;
    unsigned char F;
    unsigned char H;
    unsigned char L;
};

struct Flags{
    unsigned char Z;
    unsigned char N;
    unsigned char H;
    unsigned char C;
};

int main(int argc, char **argv) {
    unsigned char memory[0x100];
    FILE *file = fopen("boot.rom", "rb");

    int position = 0;
    while(fread(&memory[position],1,1,file)){
        position++;
        printf("%d", position);
    }
    fclose(file);
    return 0;
}
