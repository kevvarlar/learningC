// Exercise 1 and 2

// #include <stdio.h>

// enum {SUCCESS, FAIL, MAX_LEN=40};

// void DataRead(FILE *fptr);
// void PtrSeek(FILE *fptr);
// long PtrTell(FILE *fptr);
// int ErrorMsg(char *str);

// int main (void) {
//     char filename[] = "LaoTzu.txt";
//     FILE *fptr;
//     int reval = SUCCESS;

//     if ((fptr = fopen(filename, "r")) == NULL) {
//         reval = ErrorMsg(filename);
//     } else {
//         PtrSeek(fptr);
//         fclose(fptr);
//     }
//     return reval;
// }

// void PtrSeek(FILE *fptr) {
//     long offset1, offset2, offset3;
//     offset1 = PtrTell(fptr);
//     DataRead(fptr);
//     offset2 = PtrTell(fptr);
//     DataRead(fptr);
//     offset3 = PtrTell(fptr);
//     DataRead(fptr);
//     rewind(fptr);
//     printf("\nPoem in reverse order:\n\n");
//     fseek(fptr, offset3, SEEK_SET);
//     DataRead(fptr);
//     fseek(fptr, offset2, SEEK_SET);
//     DataRead(fptr);
//     fseek(fptr, offset1, SEEK_SET);
//     DataRead(fptr);
// }

// long PtrTell(FILE *fptr) {
//     long reval;

//     reval = ftell(fptr);
//     printf("The current position is %ld\n", reval);
//     return reval;
// }

// void DataRead(FILE *fptr) {
//     char buff[MAX_LEN];
//     fgets(buff, MAX_LEN, fptr);
//     printf("%s\n", buff);
// }

// int ErrorMsg(char *str) {
//     printf("Failed to open %s.\n", str);
//     return FAIL;
// }

// Exercise 3

// #include <stdio.h>

// enum {SUCCESS, FAIL};

// void DataWrite(FILE *fptr);
// void DataRead(FILE *fptr);
// int ErrorMsg(char *str);

// int main (void) {
//     FILE *fptr;
//     char filename[] = "data.bin";
//     int reval = SUCCESS;

//     if ((fptr = fopen(filename, "wb+")) == NULL) {
//         reval = ErrorMsg(filename);
//     } else {
//         DataWrite(fptr);
//         rewind(fptr);
//         DataRead(fptr);
//         fclose(fptr);
//     }
//     return reval;
// }

// void DataWrite(FILE *fptr) {
//     double x = 123.45;
//     int y = 10000;
//     printf("%5.2f\n%d\n", x, y);
//     fwrite(&x, sizeof(double), 1, fptr);
//     fwrite(&y, sizeof(int), 1, fptr);
// }

// void DataRead(FILE *fptr) {
//     double x;
//     int y;
//     printf("\nRead back from binary file: \n");
//     fread(&x, sizeof(double), 1, fptr);
//     printf("%5.2f\n", x);
//     fread(&y, sizeof(int), 1, fptr);
//     printf("%d\n", y);
// }

// int ErrorMsg(char *str) {
//     printf("Could not open %s\n", str);
//     return FAIL;
// }

//Exercise 4

#include <stdio.h>

enum {SUCCESS, FAIL, LEN = 3, STR_LEN = 23};

void DataRead(void);
int ErrorMsg(char *str);

int main (void) {
    char filename[] = "strnum.mix";
    int reval = SUCCESS;

    if (freopen(filename, "r", stdin) == NULL) {
        reval = ErrorMsg(filename);
    } else {
        DataRead();
        fclose(stdin);
    }
    return reval;
}

void DataRead(void) {
    int i;
    char c[STR_LEN];
    int x;
    for (i = 0; i < LEN; i++) {
        scanf("%s%d\n", c, &x);
        printf("%-23s  %d\n", c, x);
    }
}

int ErrorMsg(char *str) {
    printf("Could not open %s\n", str);
    return FAIL;
}