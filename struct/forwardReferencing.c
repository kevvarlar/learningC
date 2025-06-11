#include <stdio.h>

struct resume {
    char name[16];
    struct date *u;
    struct date *g;
};

struct date {
    int year;
    char school[32];
    char degree[8];
};

typedef struct resume RSM;
typedef struct date DATE;

void InfoDisplay(RSM *ptr);

int main (void) {
    DATE under = {
        1985,
        "Rice University",
        "B.S"
    };
    DATE graduate = {
        1987,
        "UT Austin",
        "M.S"
    };
    DATE *ptr_date[2] = {&under, &graduate};
    RSM new_employee = {
        "Tony",
        ptr_date[0],
        ptr_date[1]
    };

    printf("Here is the new employee's resume:\n");
    InfoDisplay(&new_employee);

    return 0;
}

void InfoDisplay (RSM *ptr) {
    printf("Name: %s\n", ptr -> name);
    printf("School name: %s\n", ptr -> u -> school);
    printf("Graduation year: %d\n", ptr -> u -> year);
    printf("Degree: %s\n", ptr -> u -> degree);
    printf("School name: %s\n", ptr -> g -> school);
    printf("Graduation year: %d\n", ptr -> g -> year);
    printf("Degree: %s\n", ptr -> g -> degree);
}