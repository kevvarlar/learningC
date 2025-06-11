#include <stdio.h>
#include <stdlib.h>

enum tag {name1, name2 = 10, name3, name4};
typedef char WORD;
typedef int SHORT;
typedef long LONG;
typedef float FLOAT;
typedef double DFLOAT;
int main (int argv, char *argc[]) {
    printf("%d, %d, %d, %d\n", name1, name2, name3, name4);
    printf("%ld, %ld, %ld, %ld, %ld\n", sizeof(WORD), sizeof(SHORT), sizeof(LONG), sizeof(FLOAT),sizeof(DFLOAT));
    if (argv < 3) {
        printf("Please reenter %s with more than two arguments\n", argc[0]);
    } else {
        for (int i = 0; i < argv; i++) {
            printf("%s\n", argc[i]);
        }
    }
    return 0;
}