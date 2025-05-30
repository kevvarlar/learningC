#include <stdio.h>

int main() {
    short int x = 0xAB78;
    unsigned int y = 0xAB78;
    printf("%d\n%u\n", x, y);
    printf("short int size: %d\nlong int size: %d\nlong double size: %d\n", sizeof(short int), sizeof(long int), sizeof(long double));
    printf("-23456 in hex format is 0x%04hX\n",(short)-23456);
    return 0;
}