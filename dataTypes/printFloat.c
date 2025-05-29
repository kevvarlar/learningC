#include <stdio.h>

int main() {
  int int_num1 = 32 / 10;
  float flt_num1 = 32 / 10;
  int int_num2 = 32.0 / 10;
  float flt_num2 = 32.0 / 10;
  int int_num3 = 32 / 10.0;
  float flt_num3 = 32 / 10.0;
  printf("The integer divis. of 32/10 is: %d\n", int_num1);
  printf("The floating-point divis. of 32/10 is: %f\n", flt_num1);
  printf("The integer divis. of 32.0/10 is: %d\n", int_num2);
  printf("The floating-point divis. of 32.0/10 is: %f\n", flt_num2);
  printf("The integer divis. of 32/10.0 is: %d\n", int_num3);
  printf("The floating-point divis. of 32/10.0 is: %f\n", flt_num3);
}