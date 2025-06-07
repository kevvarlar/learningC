#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = {'A', ' ', 's', 't', 'r', 'i', 'n', 'g', ' ', 'c', 'o', 'n', 's', 't', 'a', 'n', 't', '\0'};
    char str2[] = "Another string constant";
    char *ptrStr = "Assign a string to a pointer.";

    printf("The length of str1 is: %d bytes\n", strlen(str1));
    printf("The length of str2 is: %d bytes\n", strlen(str2));
    printf("The length of the string assigned to ptrStr is: %d bytes\n", strlen(ptrStr));
    return 0;
}