#include <stdio.h>

int StrPrint(char *str);

int main() {
    char str[24] = "Pointing to a function.";
    int (*ptr)(char *str);
    ptr = StrPrint;
    if (!(*ptr)(str)) printf("Done!\n");
    return 0;
}

int StrPrint(char *str) {
    printf("%s\n", str);
    return 0;
}