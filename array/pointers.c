#include <stdio.h>

int main() {
    int listInt[10];
    int *pListInt;
    int i;
    for (i = 0; i < 10; i++) listInt[i] = i + 1;
    pListInt = listInt;
    printf("The start address of the array: 0x%p\n", pListInt);
    printf("The value of the first element: %d\n", *pListInt);
    pListInt = &listInt[0];
    printf("The address of the first element: 0x%p\n", pListInt);
    printf("The value of the first element: %d\n", *pListInt);
    return 0;
}