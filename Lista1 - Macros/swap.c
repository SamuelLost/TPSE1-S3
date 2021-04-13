#include <stdio.h>
#define swap(x,y) {int temp=0; temp=x; x=y; y=temp;}
//#define SWAP(x,y) (x ^= y ^= x ^= y)
int main(){
    int x,y;
    printf("Digite dois números: ");
    scanf("%d %d", &x, &y);
    printf("Before of swap: (%d,%d)\n", x,y);
    swap(x,y);
    printf("After of swap: (%d,%d)\n", x,y);
    return 0;
}