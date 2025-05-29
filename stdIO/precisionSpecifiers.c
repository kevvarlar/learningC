#include <stdio.h>

int main() {
  int int_num = 123;
  double flt_num = 123.456789;
  printf("Default int format: %d\n", int_num);
  printf("With precision: %2.8d\n", int_num);
  printf("Default float format: %f\n", flt_num);
  printf("With precision: %-10.2f\n", flt_num);
  return 0;
}