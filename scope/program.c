#include <stdio.h>

int x = 1234;
double y = 1.234567;

void function1 () {
    printf("From function1:\n x=%d y=%f\n", x, y);
}

int main() {
    int x = 4321;

    function1();
    printf("Within the main block:\n x=%d y=%f\n", x, y);
    {
        double y = 7.654321;
        function1();
        printf("Within the nested block:\n x=%d y=%f\n", x, y);
    }
    return 0;
}