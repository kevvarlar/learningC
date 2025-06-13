// #include <stdio.h>

// int main () {
//     //Exercise 1

//     // #define human 100
//     // #define animal 50
//     // #define computer (animal + 1)
//     // #define SUN 0
//     // #define MON (SUN + 1)
//     // #define TUE (MON + 1)
//     // #define WED (TUE + 1)
//     // #define THU (WED + 1)
//     // #define FRI (THU + 1)
//     // #define SAT (FRI + 1)

//     // printf("human: %d, animal: %d, computer: %d\n", human, animal, computer);
//     // printf("SUN: %d\n", SUN);
//     // printf("MON: %d\n", MON);
//     // printf("TUE: %d\n", TUE);
//     // printf("WED: %d\n", WED);
//     // printf("THU: %d\n", THU);
//     // printf("FRI: %d\n", FRI);
//     // printf("SAT: %d\n", SAT);

//     // #define penny 1
//     // #define nickel 5
//     // #define dime 10
//     // #define quarter 25
//     // #define dollar 100

//     // int money_units[5] = {dollar, quarter, dime, nickel, penny};
//     // char *unit_name[5] = {"dollar(s)", "quarter(s)", "dime(s)", "nickel(s)", "penny(s)"};
//     // int cent, tmp, i;

//     // printf("Enter a monetary value in cents:\n");
//     // scanf("%d", &cent);
//     // printf("Which is equivalent to:\n");
//     // tmp = 0;
//     // for (i = 0; i < 5; i++) {
//     //     tmp = cent / money_units[i];
//     //     cent -= tmp * money_units[i];
//     //     if (tmp) printf("%d %s \n", tmp, unit_name[i]);
//     // }
//     // printf("\n");

//     //Exercise 2
//     #define multiply(num1, num2) (num1 * num2)
//     printf("%d * %d = %d\n", 2, 3, multiply(2, 3));
//     return 0;
// }

//Exercise 3
// #include <stdio.h>

// #define UPPER_CASE 1
// #define NO_ERROR 0

// int main (void) {
//     #if UPPER_CASE
//         printf("THIS LINE IS PRINTED OUT,\n");
//         printf("BECAUSE UPPER_CASE IS DEFINED.\n");
//     #endif
//     #if !LOWER_CASE
//         printf("\nThis line is printed out,\n");
//         printf("because LOWER_CASE is not defined.\n");
//     #endif
//     return NO_ERROR;
// }

//Exercise 4
#include <stdio.h>

#define C_LANG 'C'
#define B_LANG 'B'
#define NO_ERROR 0

int main (void) {
    #if C_LANG == 'C'
        #if B_LANG == 'B'
            #undef C_LANG
            #define C_LANG "I know the C language.\n"
            #undef B_LANG
            #define B_LANG "I know BASIC.\n"
            printf("%s%s", C_LANG, B_LANG);
        #else
            #undef C_LANG
            #define C_LANG "I only know the C language.\n"
            printf("%s", C_LANG);
        #endif
    #elif B_LANG == 'B'
        #undef B_LANG
        #define B_LANG "I only know BASIC.\n"
        printf("%s", B_LANG);
    #else
        printf("I don't know C or BASIC.\n");
    #endif
    return NO_ERROR;
}