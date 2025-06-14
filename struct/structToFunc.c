#include <stdio.h>

struct computer {
    float cost;
    int year;
    int cpu_speed;
    char cpu_type[16];
};

typedef struct computer SC;

SC DataReceive (SC s);

int main (void) {
    SC s;

    s = DataReceive(s);
    printf("Here are what you entered:\n");
    printf("Year: %d\n", s.year);
    printf("Cost: $%6.2f\n", s.cost);
    printf("CPU type: %s\n", s.cpu_type);
    printf("CPU speed: %d MHz\n", s.cpu_speed);

    return 0;
}

SC DataReceive(SC s) {
    printf("The type of the CPU inside your computer?\n");
    gets(s.cpu_type);
    printf("The speed(MHz) of the CPU?\n");
    scanf("%d", &s.cpu_speed);
    printf("The year your computer was made?\n");
    scanf("%d", &s.year);
    printf("How much you paid for the computer?\n");
    scanf("%f", &s.cost);
    return s;
}