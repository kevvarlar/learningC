
#include <stdio.h>
#include <string.h>

int main (void) {

    union menu {
        char name[23];
        double price;
    } dish;

    printf("The content assigned to the union separately:\n");

    strcpy(dish.name, "Sweet and Sour Chicken");

    dish.price = 9.95;

    printf("Dish Name: %s\n", dish.name);

    printf("Dish price: %5.2f\n", dish.price);
    return 0;
}