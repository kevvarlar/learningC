#include <stdio.h>

int main() {
    printf("Even Number  Odd Number\n");
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) printf("%d", i);
        else printf("%14d\n", i);
    }
    return 0;
}