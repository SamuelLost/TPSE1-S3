#include <stdio.h>

int main() {
  long int number = 2290653320;
  int part0, part1, part2, part3, part4, part5, part6, part7;
  part0 = number & 0xF;
  number >>= 4;
  part1 = number & 0xF;
  number >>= 4;
  part2 = number & 0xF;
  number >>= 4;
  part3 = number & 0xF;
  number >>= 4;
  part4 = number & 0xF;
  number >>= 4;
  part5 = number & 0xF;
  number >>= 4;
  part6 = number & 0xF;
  number >>= 4;
  part7 = number & 0xF;
  number >>= 4;

  printf("%d\n", part0);
  printf("%d\n", part1);
  printf("%d\n", part2);
  printf("%d\n", part3);
  printf("%d\n", part4);
  printf("%d\n", part5);
  printf("%d\n", part6);
  printf("%d\n", part7);
    
  return 0;
}