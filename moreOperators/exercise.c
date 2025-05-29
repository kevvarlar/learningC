#include <stdio.h>

int main() {
  int x, y;
  printf("%d\n%d\n", (x=1) && (y=10), (x=1) & (y=10));
  x = 61439;
  y = 4096;
  printf("!x = %d or %u\n!y = %d or %u\n", !x, !x, !y, !y);
  x = 123;
  y = 4;
  printf("x << y = %d and x >> y = %d\n", x << y, x >> y);
  printf("0xFFFF ^ 0x8888 =  0X%04X\n0xABCD & 0x4567 =  0X%04X\n0xDCBA | 0x1234 =  0X%04X\n", 0xFFFF ^ 0x8888, 0xABCD & 0x4567, 0xDCBA | 0x1234);
  for (x = ' '; x != 'q' ? 1 : 0;) x = getchar();
}