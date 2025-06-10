// #include <stdio.h>

// int printStr(char str[]) {
//     printf("%s\n", str);
// }

// int printStrArr(char str[][15], int max) {
//     for (int i = 0; i < max; i++) printf("%s\n", str[i]);
// }

// int main() {
//     char str[] = "I like C!";
//     printStr(str);
//     char *ptr;
//     int i;
//     ptr = str;
//     for (i = 0; ptr[i]; i++) {
//         if (ptr[i] ==  'i') ptr[i] = 'o';
//         if (ptr[i] == 'k') ptr[i] = 'v';
//     }
//     printStr(str);

//     char str2[2][15] = {"You know what,", "C is powerful."};
//     printStrArr(str2, 2);
//     return 0;
// }
#include <stdio.h>

void StrPrint1(char **str1, int size);

void StrPrint2(char *str2);

int main() {
    char *str[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int i, size = 7;
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