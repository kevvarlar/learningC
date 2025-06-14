#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum constants {ITEM_NUM = 3, DELT = 'a' - 'A'};
typedef char *STRING[ITEM_NUM];
typedef char *PTR_STR;
typedef char BIT8;
typedef int BIT32;

void Convert2Upper(PTR_STR str1, PTR_STR str2);

int main() {
    STRING str;
    STRING moon = {"Whatever we wear", "we become beautiful",  "moon viewing!"};
    BIT32 i;
    BIT32 term = 0;

    for (i = 0; i<ITEM_NUM; i++) {
        str[i] = malloc((strlen(moon[i]) + 1) * sizeof(BIT8));
        if (str[i] == NULL) {
            printf("malloc() failed;\n");
            term = 1;
            break;
        }
        Convert2Upper(moon[i], str[i]);
        printf("%s\n", moon[i]);
    }
    for (i = 0; i<ITEM_NUM; i++) {
        printf("\n%s",str[i]);
        free(str[i]);
    }

    return term;
}

void Convert2Upper(PTR_STR str1, PTR_STR str2) {
    BIT32 i;

    for (i = 0; str1[i]; i++) {
        if ((str1[i] >= 'a') && (str1[i] <= 'z')) str2[i] = str1[i] - DELT;
        else str2[i] = str1[i];
    }
    str2[i] = '\0';
}