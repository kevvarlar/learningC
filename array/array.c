#include <stdio.h>

int main() {
    int i;
    int listInt[10];
    for (i = 0; i < 10; i++) {
        listInt[i] = i + 1;
        printf("listInt[%d] is initialized with %d\n", i, listInt[i]);
    }
    return 0;
}