#include <stdio.h>

int main() {
    char c, *pC;
    c = 'A';
    printf("c: address=0x%p, content=%c\n", &c, c);
    pC = &c;
    printf("pC: address=0x%p, content 0x%p\n", &pC, pC);
    printf("*pC => %c\n", *pC);
    *pC = 'B';
    printf("pC: address=0x%p, content 0x%p\n", &pC, pC);
    printf("*pC => %c\n", *pC);
    printf("c: address=0x%p, content=%c\n", &c, c);
    return 0;
}