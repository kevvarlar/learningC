#include <stdio.h>

int main() {
  printf("Enter a character:\n(enter x to exit)\n");
  int c = ' ';
  while(c != 'x') {
    c = getchar();
    putchar(c);
  }
  printf("\nOut of the for loop. Bye!\n");
  return 0;
}