#include <stdio.h>

int main() {
  printf("Please type in a character: \n");
  int ch = getc(stdin);
  printf("The character you typed was: %c\n", ch);
  return 0;
}