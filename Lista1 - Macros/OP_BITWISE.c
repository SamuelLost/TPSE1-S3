#include <stdio.h>
#define OR(x,y) ((x) | (y))
#define AND(x,y) ((x) & (y))
#define XOR(x,y) ((x) ^ (y))
#define x 0x17
#define y 0xFF 

int main(){

    printf("BITWISE AND %x with %x = %x\n", x, y, AND(x,y));
    printf("BITWISE OR %x with %x = %x\n", x, y, OR(x,y));
    printf("BITWISE XOR %x with %x = %x\n", x, y, XOR(x,y));

    return 0;
}