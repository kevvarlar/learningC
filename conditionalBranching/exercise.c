#include <stdio.h>

int main() {
    // printf("Integers that can be divided by both 2 and 3\n");
    // printf("(within the range of 0 to 100):\n");
    // for (int i = 0; i <= 100; i++) if ((i % 6 == 0)) printf("   %d\n", i);

    // printf("Integers that can be divided by both 2 and 3\n");
    // printf("(within the range of 0 to 100):\n");
    // for (int i = 0; i <= 100; i++) if (i % 2 == 0) if (i % 3 == 0) printf("   %d\n", i);

    // int x = getchar();
    // switch (x) {
    //     case 'A':
    //         printf("The numeric value of A is %d\n", x);
    //         break;
    //     case 'B':
    //         printf("The numeric value of B is %d\n", x);
    //         break;
    //     case 'C':
    //         printf("The numeric value of C is %d\n", x);
    //         break;
    //     default:

    //         break;
    // }

    // int c;
    // while (1) {
    //     c = getchar();
    //     if (c == 'q') break;
    // }
    int sum = 0;
    for (int i = 1; i < 8; i++) {
        if (i % 3 == 0 && i % 2 == 0) continue;
        sum += i;
    }
    printf("The sum of 1, 2, 3, 4, 5, and 7 is: %d\n", sum);
    return 0;
}