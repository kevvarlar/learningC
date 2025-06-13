#include <stdio.h>
#include <string.h>

int main (void) {
    //Exercise 1

    // int count = 0;
    // int num = 0;
    // FILE *fptr;
    // int MAX_SIZE = 81;
    // char buff[MAX_SIZE];
    // char filename[] = "haiku.txt";
    // if ((fptr = fopen(filename, "r")) != NULL) {
    //     while(!feof(fptr)) {
    //         num = fread(buff, sizeof(char), MAX_SIZE - 1, fptr);
    //         count += num;
    //         buff[num * sizeof(char)] = '\0';
    //         printf("%s", buff);
    //     }
    //     printf("Total characters were: %d\n", count);
    // } else {
    //     printf("Failed to open %s\n", filename);
    //     return 1;
    // }

    //Exercise 2

    // char filename[20], buff[32];
    // FILE *fptr;
    // printf("Enter a string to enter into a text file:\n");
    // fgets(buff, 32, stdin);
    // printf("Enter the name of the file (make sure to include .txt):\n");
    // fgets(filename, 20, stdin);
    // if ((fptr = fopen(filename, "w")) == NULL) {
    //     printf("File failed to open %s\n", filename);
    //     return 1;
    // } else {
    //     fputs(buff, fptr);
    //     printf("%s entered into %s\n", buff, filename);
    // }
    // fclose(fptr);

    // char s[] = "Disk file I/O is tricky.";
    // char filename[] = "test_21.txt";
    // FILE *fptr;
    // int result = 0;
    // if ((fptr = fopen(filename, "w")) == NULL) {
    //     result = 1;
    //     printf("%s failed to open\n", filename);
    // } else {
    //     int i;
    //     for (i = 0; s[i]; i++) {
    //         printf("%c", s[i]);
    //         fputc(s[i], fptr);
    //     }
    //     printf("\n");
    // }
    // fclose(fptr);

    char s[25] = "Disk file I/O is tricky.";
    char filename[] = "test_21.txt";
    FILE *fptr;
    int result = 0;
    if ((fptr = fopen(filename, "w")) == NULL) {
        result = 1;
        printf("%s failed to open\n", filename);
    } else {
        printf("%s\n", s);
        fwrite(s, sizeof(char), strlen(s), fptr);
    }
    fclose(fptr);
    return result;
}