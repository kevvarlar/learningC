#include <stdio.h>

int main() {
    char arrayChar[15] = {'C', ' ', 'i', 's', ' ', 'p', 'o', 'w', 'e', 'r', 'f', 'u', 'l', 'l', '\0'};
    for (int i = 0; arrayChar[i] != '\0'; i++) {
        printf("%c", arrayChar[i]);
    }
    return 0;
}