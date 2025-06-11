#include <stdio.h>

int main(void) {
    struct automobile {
        int year;
        char model[10];
        int engine_power;
        double weight;
    } sedan = {
        1997,
        "New Model",
        200,
        23456.67
    };
    printf("Initial values: %d, %s, %d, %6.2f\n", sedan.year, sedan.model, sedan.engine_power, sedan.weight);
}