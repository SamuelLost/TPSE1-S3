#include <stdio.h>
#define TRUE "TRUE"
#define FALSE "FALSE"
#define DIV_10(x) ((x % 10) == 0) ? TRUE:FALSE

int main(){
    int counter;
    counter = 0;
    printf("Digite um número: ");
    scanf("%d", &counter);
    printf("%s\n",DIV_10(counter));
    return (0);
}
