#include <stdio.h>

int main() {
    int totalByte;
    int listInt[10];

    totalByte = sizeof(int) * 10;
    printf("The size of int is %d-byte long.\n", sizeof(int));
    printf("The array of 10 ints has a total %d bytes.\n", totalByte);
    printf("The address of the first element: 0x%x\n", &listInt[0]);
    printf("The address of the last element: 0x%x\n", &listInt[9]);
    return 0;
}