#include <stdio.h>

int main() {
  for (int i = 1; i <= 3; i++) {
    printf("The start of iteration %d of the outer loop\n", i);
    for (int j = 1; j <= 4; j++) {
      printf("    Iteration %d of the inner loop.\n", j);
    }
    printf("The end of iteration %d of the outer loop.\n", i);
  }
}