// #include <stdio.h>

// int main() {
//     register int x;
//     static float y;
//     char *p = '\0';
//     {
//         int i;
//         const char ch;
//     }
//     return 0;
// }

// #include <stdio.h>

// int x = 1234;
// double y = 1.234567;

// void function1 (int x, double y) {
//     printf("From function1:\n x=%d y=%f\n", x, y);
// }

// int main() {
//     int x = 4321;

//     function1(x, y);
//     printf("Within the main block:\n x=%d y=%f\n", x, y);
//     {
//         double y = 7.654321;
//         function1(x, y);
//         printf("Within the nested block:\n x=%d y=%f\n", x, y);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int i;
//     for (i = 0; i < 5; i++) {
//         int x = 0;
//         static int y = 0;
//         printf("x=%d, y=%d\n", x++, y++);
//     }
//     return 0;
// }

#include <stdio.h>

int addTwo(int x, int y) {
    static int counter = 1;
    static int previous = 0;
    printf("This is the function call of %d and the previous call was %d,\n", counter++, previous);
    previous = x + y;
    return previous;
}

int main() {
    int i, j;

    for (i = 0, j = 0; i<5; i++, j++) printf("The addition of %d and %d is %d.\n\n", i, j, addTwo(i, j));
    return 0;
}