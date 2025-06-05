#include <stdio.h>

int main() {
    char arrayChar[] = {'C', ' ', 'i', 's', ' ', 'p', 'o', 'w', 'e', 'r', 'f', 'u', 'l', 'l', '\0'};
    int listInt[][3] = {
        {1, 1, 1},
        {2, 4, 8},
        {3, 9, 27},
        {4, 16, 64},
        {5, 25, 125},
        {6, 36, 216},
        {7, 49, 343}
    };
    printf("The size of arrayCh[] is %d bytes.\n", sizeof(arrayChar));
    printf("The size of listInt[][3] is %d bytes.\n", sizeof(listInt));
    return 0;
}