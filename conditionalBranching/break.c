
#include <stdio.h>

int main() {
    printf("Please enter a single digit for a day.\n");
    printf("(within the range of 1 to 7):\n");
    int day = getchar();
    switch (day) {
        case '1':
            printf("Day 1 is Sunday\n");
            break;
        case '2':
            printf("Day 2 Monday\n");
            break;
        case '3':
            printf("Day 3 is Tuesday\n");
            break;
        case '4':
            printf("Day 4 is Wednesday\n");
            break;
        case '5':
            printf("Day 5 is Thursday\n");
            break;
        case '6':
            printf("Day 6 is Friday\n");
            break;
        case '7':
            printf("Day 7 is Saturday\n");
            break;
        default:
            printf("The digit is not within the range of 1 to 7.");
            break;
    }
    return 0;
}