#include <stdio.h>
#include <stdlib.h>

int main() {
    // // Exercise 1
    // int max, i, *ptr;
    // printf("Enter the number of bytes you want to allocate (single digit number): \n");
    // scanf("%d", &max);
    // ptr = malloc(max * sizeof(int));
    // if (ptr == NULL) {
    //     printf("malloc() failed.\n");
    //     return 1;
    // }
    // else {
    //     for (i = 0; i < max; i++) {
    //         *(ptr + i) = i + 1;
    //     }
    //     int sum = 0;
    //     for (i = 0; i < max; i++) {
    //         sum += *(ptr + i);
    //     }
    //     printf("The sum of all the integers from 1 to %d is: %d\n", max, sum);
    // }
    // free(ptr);
    // return 0;

    //Exercise 2
    // float *ptr;
    // ptr = calloc(100, sizeof(float));
    // if (ptr == NULL) {
    //     printf("calloc() failed.\n");
    //     return 1;
    // }
    // ptr = realloc(ptr, 150 * sizeof(float));
    // if (ptr == NULL) {
    //     printf("realloc() failed.");
    //     return 1;
    // }
    // free(ptr);
    // return 0;

    //Exercise 3
    // float *ptr1, *ptr2;
    // int i, max;
    // printf("Enter the number of bytes you want to allocate (single digit number): \n");
    // scanf("%d", &max);
    // ptr1 = malloc(max * sizeof(float));
    // ptr2 = calloc(max, sizeof(float));
    // if (ptr1 == NULL || ptr2 == NULL) {
    //     printf("calloc() or malloc() failed.\n");
    //     return 1;
    // }
    // else {
    //     for (i = 0; i < max; i++) {
    //         printf("ptr1[%d] = %5.2f, ptr2[%d] = %5.2f\n", i, *(ptr1 + i), i, *(ptr2 + i));
    //     }
    // }
    // free(ptr1);
    // free(ptr2);
    // return 0;

    //Exercise 4

}