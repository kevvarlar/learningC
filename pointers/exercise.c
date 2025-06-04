#include <stdio.h>

int main() {
    int x = 512;
    int y = 1024;
    int z = 2048;
    printf("&x = 0x%p, x = %d\n&y = 0x%p, y = %d\n&z = 0x%p,  z = %d\n", &x, x, &y, y, &z, z);
    double fltNum = 123.45;
    double *pFltNum = &fltNum;
    printf("%.2f\n", fltNum);
    *pFltNum = 543.21;
    printf("%.2f\n", fltNum);
    char ch = 'A';
    char *pCh = &ch;
    printf("%c\n", ch);
    *pCh = 66;
    printf("%d\n", ch);
    x = 5;
    y = 6;
    int *pX = &x;
    int *pY = &y;
    printf("Given x = %d and y = %d\n", x, y);
    *pX *= *pY;
    printf("x * y = %d\n", x);
    return 0;
}