#include <stdio.h>
void HEXtoBIN(char* x){
    long int i=0;
    while(x[i]!= '\0'){
        switch (x[i]){
        case '0': 
            printf("0000"); 
            break; 
        case '1': 
            printf("0001"); 
            break; 
        case '2': 
            printf("0010"); 
            break; 
        case '3': 
            printf("0011"); 
            break; 
        case '4': 
            printf("0100"); 
            break; 
        case '5': 
            printf("0101"); 
            break; 
        case '6': 
            printf("0110"); 
            break; 
        case '7': 
            printf("0111"); 
            break; 
        case '8': 
            printf("1000"); 
            break; 
        case '9': 
            printf("1001"); 
            break; 
        case 'A': 
        case 'a': 
            printf("1010"); 
            break; 
        case 'B': 
        case 'b': 
            printf("1011"); 
            break; 
        case 'C': 
        case 'c': 
            printf("1100"); 
            break; 
        case 'D': 
        case 'd': 
            printf("1101"); 
            break; 
        case 'E': 
        case 'e': 
            printf("1110"); 
            break; 
        case 'F': 
        case 'f': 
            printf("1111"); 
            break; 
        default: 
            printf("\nInvalid hexadecimal digit %c", x[i]); 
        } 
        i++; 
    }
}
unsigned int CountSetBits(unsigned int n);
int main(){
    char hex[4] = {"3FF"};
    HEXtoBIN(hex);
    printf("\n%d bits set", CountSetBits(1023));
    
}

unsigned int CountSetBits(unsigned int n){
    unsigned int count=0;
    while(n) {
        count += (n & 1);
        n >>= 1;
    }
    return count;
}