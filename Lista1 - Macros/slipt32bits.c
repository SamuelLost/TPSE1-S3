#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 4
#define BASE 2

typedef struct split {
    int split0;
    int split1;
    int split2;
    int split3;
    int split4;
    int split5;
    int split6;
    int split7; 
}Splits;

Splits* partition(Splits* number, long int a){
    //Splits* number;
    number->split0 = (a & 0xF);
    a >>= 4;
    number->split1 = (a & 0xF);
    a >>= 4;
    number->split2 = (a & 0xF);
    a >>= 4;
    number->split3 = (a & 0xF);
    a >>= 4;
    number->split4 = (a & 0xF);
    a >>= 4;
    number->split5 = (a & 0xF);
    a >>= 4;
    number->split6 = (a & 0xF);
    a >>= 4;
    number->split7 = (a & 0xF);
    a >>= 4;
    return number;
}

/*char* my_itoa(int a, char buffer[], int base) {
    int aux = 4;
    for(int i=aux-1; i >= 0; i--) {
        if(a%base==0){
            buffer[i] = '0';
        }
        else {
            buffer[i] = '1';
        }
        a = a/base;
    }
    return buffer;
}*/

//Convertendo número decimal para binário e colocando dentro de uma string
char* my_itoa(int num, char buffer[], int base, int tamanho){
    for (int aux = tamanho-1; aux >= 0; aux--){
      if (num % base == 0)
         buffer[aux] = '0';
      else
         buffer[aux] = '1';
      num = num / 2;
    }
    //printf("%s\n", buffer);
    return buffer;
}

int main(){
    long int a = 2290653320;
    Splits* number = (Splits*) malloc(sizeof(Splits));
    number = partition(number, a);
    char PART0[N]; 
    char PART1[N];
    char PART2[N];
    char PART3[N];
    char PART4[N];
    char PART5[N];
    char PART6[N];
    char PART7[N];

    my_itoa(number->split0, PART0, BASE, N);
    printf("PARTE 0: %s\n", PART0);

    my_itoa(number->split1, PART1, BASE, N);
    printf("PARTE 1: %s\n", PART1);

    my_itoa(number->split2, PART2, BASE, N);
    printf("PARTE 2: %s\n", PART2);

    my_itoa(number->split3, PART3, BASE, N);
    printf("PARTE 3: %s\n", PART3);

    my_itoa(number->split4, PART4, BASE, N);
    printf("PARTE 4: %s\n", PART4);

    my_itoa(number->split5, PART5, BASE, N);
    printf("PARTE 5: %s\n", PART5);

    my_itoa(number->split6, PART6, BASE, N);
    printf("PARTE 6: %s\n", PART6);

    my_itoa(number->split7, PART7, BASE, N);
    printf("PARTE 7: %s\n", PART7);

    return 0;
}