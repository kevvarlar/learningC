#include <stdio.h>

int main() {
  printf("Hex(uppercase)   Hex(lowercase)   Decimal\n");
  for (int i = 0; i < 16; i++) {
    printf("%X                %x                %d\n", i, i, i);
  }
  return 0;
}