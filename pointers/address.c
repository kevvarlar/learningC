#include <stdio.h>

int main() {
    char c;
    int x;
    float y;

    printf("c: address=0x%p, content=%c\n", &c, c);
    printf("x: address=0x%p, content=%d\n", &x, x);
    printf("y: address=0x%p, content=%5.2f\n", &y, y);
    c = 'A';
    x = 7;
    y = 123.45;
    printf("c: address=0x%p, content=%c\n", &c, c);
    printf("x: address=0x%p, content=%d\n", &x, x);
    printf("y: address=0x%p, content=%5.2f\n", &y, y);
    return 0;
}