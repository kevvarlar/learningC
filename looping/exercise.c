#include <stdio.h>

int main() {
  int i, j;
  // for(i = 0, j = 1; i < 8; i++, j++);
  // printf("%d + %d = %d\n", i, j, i + j);
  // for(i = 0, j = 1; i < 8; i++, j++) printf("%d + %d = %d\n", i, j, i + j);
  // printf("Enter a character:\n(enter K to exit)\n");
  // for (int c = ' '; c != 'K';) {
  //   c = getchar();
  //   putchar(c);
  // }
  // printf("\nOut of the for loop. Bye!\n");
  // return 0;
  // for (int i = 65; i < 72; i++) {
  //   printf("The numeric value of %c is %d.\n", i, i);
  // }
  i = 1;
  while (i <= 3) {
    printf("The start of iteration %d of the outer loop\n", i);
    j = 1;
    do {
      printf("    Iteration %d of the inner loop.\n", j);
      j++;
    } while (j <= 4);
    printf("The end of iteration %d of the outer loop.\n", i);
    i++;
  }
  return 0;
}