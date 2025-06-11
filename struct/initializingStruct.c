#include <stdio.h>

struct employee {
    int id;
    char name[32];
};

void displayEmployee(struct employee *ptr);

int main (void) {
    struct employee info = {
        1,
        "B. Smith"
    };

    printf("Here is a sample:\n");
    displayEmployee(&info);

    printf("What's your name?\n");
    gets(info.name);
    printf("What's your ID number?\n");
    scanf("%d", &info.id);

    printf("\nHere are what you entered:\n");
    displayEmployee(&info);
    return 0;
}

void displayEmployee(struct employee *ptr) {
    printf("Name: %s\n", ptr -> name);
    printf("ID #: %04d\n", ptr -> id);
}