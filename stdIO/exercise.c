#include <stdio.h>

int main() {
  putchar('B');
  putchar('y');
  putchar('e');
  putchar('\n');
  printf("%-3d\n", 123);
  printf("%-6.3f\n", 123.456);
  printf("0x%04X, 0x%04X, 0x%04X\n", 15, 150, 1500);
  putchar(getchar());
  return 0;
}