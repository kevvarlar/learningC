#include <stdio.h>

int main() {
    // Exercise 1
    char arrayChar[5] = {'A', 'B', 'C', 'D', 'E'};
    int i;
    for (i = 0; i < 5; i++) {
        printf("%c", arrayChar[i]);
    }
    printf("\n");
    // Exercise 2
    for (i = 0; i < 5; i++) {
        arrayChar[i] = i + 97;
        printf("%c", arrayChar[i]);
    }
    printf("\n");
    // Exercise 3
    char listCh[][2] = {
        {'1', 'a'},
        {'2', 'b'},
        {'3', 'c'},
        {'4', 'd'},
        {'5', 'e'},
        {'6', 'f'}
    };
    printf("size of listCh[][2] is: %lu bytes\n", sizeof(listCh));
    for (i = 0; i < 6; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%c", listCh[i][j]);
        }
        printf("\n");
    }
    // Exercise 4
    char string[] = {'I', ' ', 'l', 'i', 'k', 'e', ' ', 'C', '!', '\0'};
    printf("%s\n", string);
    // Exercise 5
    double listData[6] = {
        1.12345,
        2.12345,
        3.12345,
        4.12345,
        5.12345
    };
    int totalSize = sizeof(double) * 6;
    printf("The size of listData[6] is: %d bytes == %lu bytes\n", totalSize, sizeof(listData));
    return 0;
}