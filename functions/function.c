#include <stdio.h>

int function1 (int x, int y);

double function2 (double x, double y) {
    printf("Within function2.\n");
    return x - y;
}

int main() {
    int x1 = 80;
    int y1 = 10;
    double x2 = 100.123456;
    double y2 = 10.123456;

    printf("Pass funciton1 %d and %d\n", x1, y1);
    printf("function1 returns %d\n", function1(x1, y1));
    printf("Pass function2 %f and %f.\n", x2, y2);
    printf("function 2 returns %f\n", function2(x2, y2));
    return 0;
}

int function1(int x, int y) {
    printf("Within function1.\n");
    return x + y;
}