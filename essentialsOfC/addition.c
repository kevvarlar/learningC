#include <stdio.h>

int addition(int a, int b) {
  return a + b;
}

int multiplication(int a, int b) {
  return a * b;
}

int main () {
  int i = addition(1, 1);
  int j = multiplication(3, 5);
  printf("3 * 5 = %d\n", j);
  printf("1 + 1 = %d\n", i);
  return 0;
}