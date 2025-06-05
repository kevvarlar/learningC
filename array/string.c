#include <stdio.h>

int main() {
    char arrayCh[7] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};
    int i;
    for (i = 0; i < 7; i++) {
        printf("arrayCh[%d] contains: %c\n", i, arrayCh[i]);
    }
    printf("Put all elements together(Method I):\n");
    for (int i = 0; i < 7; i++) {
        printf("%c", arrayCh[i]);
    }
    printf("\nPut all elements together(Method II)\n");
    printf("%s\n", arrayCh);
    return 0;
}