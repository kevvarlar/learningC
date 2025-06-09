#include <stdio.h>

int addTwo(int x, int y) {
    static int counter = 1;

    printf("This is the function call of %d,\n", counter++);
    return x + y;
}

int main() {
    int i, j;

    for (i = 0, j = 5; i<5; i++, j--) printf("The addition of %d and %d is %d.\n\n", i, j, addTwo(i, j));
    return 0;
}