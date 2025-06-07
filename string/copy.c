#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Copy a string.";
    char str2[15];
    char str3[15];
    int i;
    strcpy(str2, str1);
    for (i = 0; str1[i]; i++) {
        str3[i] = str1[i];
    }
    str3[i] = '\0';
    printf("The contents of str2: %s\n", str2);
    printf("The contents of str3: %s\n", str3);
    return 0;
}