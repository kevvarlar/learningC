#include <stdio.h>

int main() {
    int x;
    int *p1, *p2, *p3;

    x = 1234;
    printf("x: address=0x%p, content=%d\n", &x, x);
    p1 = &x;
    printf("p1: address=0x%p, content=0x%p\n", &p1, p1);
    printf("*p1 => %d\n", *p1);
    p2 = &x;
    printf("p2: address=0x%p, content=0x%p\n", &p2, p2);
    printf("*p2 => %d\n", *p2);
    p3 = p1;
    printf("p3: address=0x%p, content=0x%p\n", &p3, p3);
    printf("*p3 => %d\n", *p3);
    return 0;
}