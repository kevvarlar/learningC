#include <stdio.h>

int main (void) {
    union employee {
        int start_year;
        int dpt_code;
        int id_number;
    } info;

    info.start_year = 1997;
    printf("Start Year: %d\n", info.start_year);
    info.dpt_code = 8;
    printf("Dpt. Code: %d\n", info.dpt_code);
    info.id_number = 1234;
    printf("ID Number: %d\n", info.id_number);
    return 0;
}