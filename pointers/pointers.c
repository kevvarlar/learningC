#include <stdio.h>

int main() {
    char c, *pC;
    int x, *pX;
    float y, *pY;

    c = 'A';
    x = 7;
    y = 123.45;
    printf("c: address=0x%p, content=%c\n", &c, c);
    printf("x: address=0x%p, content=%d\n", &x, x);
    printf("y: address=0x%p, content=%5.2f\n", &y, y);
    pC = &c;
    printf("pC: address=0x%p, content 0x%p\n", &pC, pC);
    printf("*pC => %c\n", *pC);
    pX = &x;
    printf("pX: address=0x%p, content 0x%p\n", &pX, pX);
    printf("*pX => %d\n", *pX);
    pY = &y;
    printf("pY: address=0x%p, content 0x%p\n", &pY, pY);
    printf("*pY => %5.2f\n", *pY);
    return 0;
}