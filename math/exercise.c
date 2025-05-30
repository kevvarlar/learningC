#include <stdio.h>
#include <math.h>

int main() {
    double x = (30.0 * 3.141593) / 180;
    printf("sine of 30 is: %f\ntangent of 30 is: %f\n", sin(x), tan(x));
    printf("The sqrt of 0x19A1 (i.e %d) is: %f\n", 0x19A1, sqrt(0x19A1));
    return 0;
}