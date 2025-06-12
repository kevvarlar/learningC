#include <stdio.h>
#include <string.h>

int main (void) {
    union u {
        double x;
        int y;
    } a_union;

    struct s {
        double x;
        int y;
    } a_struct;

    printf("The size of double: %ld-byte\n", sizeof(double));
    printf("The size of int: %ld-byte\n", sizeof(int));

    printf("The size of a_union: %ld-byte\n", sizeof(a_union));
    printf("The size of a_struct: %ld-byte\n", sizeof(a_struct));
    return 0;
}