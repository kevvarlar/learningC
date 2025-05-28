#include <stdio.h>

int main() {
  int result;
  int x = 1;
  int y = 3;
  x += y;
  result = x;
  x = 1;
  printf("%d\n", result);
  x += -y;
  result = x;
  x = 1;
  printf("%d\n", result);
  x -= y;
  result = x;
  x = 1;
  printf("%d\n", result);
  x -= -y;
  result = x;
  x = 1;
  printf("%d\n", result);
  x *= y;
  result = x;
  x = 1;
  printf("%d\n", result);
  x *= -y;
  result = x;
  x = 1;
  printf("%d\n", result);
  x = 3;
  y = 6;
  result = x * y == 18;
  printf("%d\n", result);
  x = 1;
  printf("x++ produces: %d\n", x++);
  printf("Now x contains: %d\n", x);
  x = 1;
  printf("x = x++ produces: %d\n", x = x++);
  printf("Now x contains: %d\n", x);
  x = y = 0;
  printf("The comparison result is: %d\n", x == y);
  return 0;
}