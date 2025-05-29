#include <stdio.h>

int main() {
    short int x = 0xFFFF;
    unsigned int y = 0xFFFFu;
    long int s = 0xFFFFFFFFFFFFFFFFl;
    long unsigned int t = 0xFFFFFFFFFFFFFFFFl;
    printf("The short int of 0xFFFF is %hd.\n", x);
    printf("The unsigned int of 0xFFFF is %u.\n", y);
    printf("The long int of 0xFFFFFFFFFFFFFFFF is %ld.\n", s);
    printf("The long unsigned int of 0xFFFFFFFFFFFFFFFF is %lu.\n", t);
    return 0;
}