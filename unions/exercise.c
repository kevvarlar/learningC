#include <stdio.h>
#include <string.h>

struct person {
    char name[16];
    int US: 1;
    union citizenship {
        char state[16];
        char country[64];
    } provider;
};

int main (void) {
    struct person p;
    char is_yes[4];
    printf("Enter your name\n");
    gets(p.name);
    printf("Are you a US Citizen?\n");
    gets(is_yes);
    if (is_yes[0] == 'y' || is_yes[0] == 'Y') {
        printf("What state are you from?\n");
        gets(p.provider.state);
        p.US = 1;
    } else {
        printf("What country are you from?\n");
        gets(p.provider.country);
        p.US = 0;
    }
    printf("Your name is %s\n", p.name);
    if (p.US == 1) printf("The state you are from is %s\n", p.provider.state);
    else printf("The country you are from is %s\n", p.provider.country);
    return 0;
}