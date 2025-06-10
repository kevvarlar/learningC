#include <stdio.h>

void StrPrint1(char **str1, int size);

void StrPrint2(char *str2);

int main() {
    char *str[4] = {"There's music in the sighing of a reed;", "There's music in the gushing of a rill;", "There's music in all things if men had ears;", "There earth is but an echo of the spheres.\n"};
    int i, size = 4;
    StrPrint1(str, size);
    for (i = 0; i < size; i++) StrPrint2(str[i]);
    return 0;
}

void StrPrint1(char **str1, int size) {
    for (int i = 0; i < size; i++) printf("%s\n", str1[i]);
}

void StrPrint2(char *str2) {
    printf("%s\n", str2);
}