#include <stdio.h>

int addition(int num1, int num2) {
  return num1 + num2;
}

int subtraction(int num1, int num2) {
  return num1 - num2;
}

int multiplication(int num1, int num2) {
  return num1 * num2;
}

double division(int num1, int num2) {
  return (double)num1 / num2;
}
int main() {
  printf("Input two single-digit numbers and choose the operation you wish to do all together: \naddition(+), subtraction(-), multiplication(*), division(/)\n");
  int num1 = getchar() - 48;
  int operation = getchar();
  int num2 = getchar() - 48;
  double result;
  switch(operation) {
    case '+':
      result = addition(num1, num2);
      break;
    case '-':
      result = subtraction(num1, num2);
      break;
    case '*':
      result = multiplication(num1, num2);
      break;
    case '/':
      result = division(num1, num2);
      break;
    default:
      return 1;
  }
  printf("The result is %1.2f\n", result);
  return 0;
}