#include <stdio.h>
#define is_digit(x) ((x>=0) && (x<=9)) ? 1:0 //Teste se o número está entre 0 e 9
#define is_hex(y) ((is_digit(y)) || ((y>= 0xA) && (y<=0xF)) || ((y>= 0xf) && (y<=0xf))) ? 1:0 //Chama a macro is_digit para ajudar nos hexas de 0-9, depois teste de a-f e A-F
#define A 0xA
int main(){
    printf("%d", is_hex(A));
    return 0;
}