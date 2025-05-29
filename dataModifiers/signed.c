#include <stdio.h>

int main() {
    signed char ch = 0xFF;
    int x = 0xFFFF;
    unsigned int y = 0xFFFFu;
    printf("The decimal of signed 0xFF is %d.\n", ch);
    printf("The decimal of signed 0xFFFF is %d.\n", ch);
    printf("The decimal of unsigned 0xFFFFu is %u.\n", ch);
    printf("The hex of decimal 12345 is 0x%X.\n", 12345);
    printf("The hex of decimal -12345 is 0x%X.\n", -12345);
    return 0;
}