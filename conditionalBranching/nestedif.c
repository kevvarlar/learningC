#include <stdio.h>

int main() {
    for (int i = -5; i <= 5; i++) {
        if (i > 0)
            if (i % 2 == 0) printf("%d is an even number.\n", i);
            else printf("%d is an odd number.\n", i);
        else if (i == 0) printf("The number is zero.\n");
        else printf("Negative number: %d\n", i);
    }
    return 0;
}