#include <stdio.h>

int main (){

  char number = 86; //Número original
  int shift_number = 0; //Número final
  char bit_number = 7; //Número de bits
  // for começando do 128 (0b10000000)
  for (unsigned int bit = 0x80; bit > 0; bit = (bit>>1)){
    if (number & bit) {
      shift_number |= (1 << bit_number);
      --bit_number;
    }
  }

  printf("%d\n", shift_number);

  return 0;

}