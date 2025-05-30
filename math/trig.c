#include <stdio.h>
#include <math.h>

int main() {
    double x = 45.0;
    x *= 3.141593 / 180.0;
    printf("The sine of 45 is: %f.\n", sin(x));
    printf("The cosine of 45 is: %f.\n", cos(x));
    printf("The tangent of 45 is: %f.\n", tan(x));
    return 0;
}