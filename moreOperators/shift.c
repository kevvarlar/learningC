#include <stdio.h>

int main() {
  int x, y, z;

  x = 255;
  y = 5;
  printf("Given x = %4d, i.e., 0X%04X\n", x, x);
  printf("Given y = %4d, i.e., 0X%04X\n", y, y);
  z = x >> y;
  printf("x >> y returns: %6d, i.e., 0X%04X\n", z, z);
  z = x << y;
  printf("x << y returns: %6d, i.e., 0X%04X\n", z, z);
  return 0;
}