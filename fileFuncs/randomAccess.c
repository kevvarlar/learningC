#include <stdio.h>

enum {SUCCESS, FAIL, MAX_LEN = 80};

void PtrSeek(FILE *fptr);
long PtrTell(FILE *fptr);
void DataRead(FILE *fptr);
int ErrorMsg(char *str);

int main (void) {
    FILE *fptr;
    char filename[] = "haiku.txt";
    int reval = SUCCESS;

    if ((fptr = fopen(filename, "r")) == NULL) {
        reval = ErrorMsg(filename);
    } else {
        PtrSeek(fptr);
        fclose(fptr);
    }

    return reval;
}

void PtrSeek(FILE *fptr) {
    long offset1, offset2, offset3;

    offset1 = PtrTell(fptr);
    DataRead(fptr);
    offset2 = PtrTell(fptr);
    DataRead(fptr);
    offset3 = PtrTell(fptr);
    DataRead(fptr);

    printf("\nRe-read the haiku\n");
    fseek(fptr, offset3, SEEK_SET);
    DataRead(fptr);
    fseek(fptr, offset2, SEEK_SET);
    DataRead(fptr);
    fseek(fptr, offset1, SEEK_SET);
    DataRead(fptr);
}

long PtrTell(FILE *fptr) {
    long reval;

    reval = ftell(fptr);
    printf("The fptr is at %ld\n", reval);

    return reval;
}

void DataRead(FILE *fptr) {
    char buff[MAX_LEN];

    fgets(buff, MAX_LEN, fptr);
    printf("---%s", buff);
}

int ErrorMsg(char *str) {
    printf("Cannot open %s.\n", str);
    return FAIL;
}