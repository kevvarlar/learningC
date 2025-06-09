// #include <stdio.h>
// #include <time.h>

// void GetDateTime(void);

// int main() {
//     printf("Before the GetDateTime() function is called\n");
//     GetDateTime();
//     printf("After the GetDateTime() function is called\n");
//     return 0;
// }

// void GetDateTime(void) {
//     time_t now;

//     printf("Withing GetDateTime()\n");
//     time(&now);
//     printf("Current date and time is: %c\n", asctime(localtime(&now)));
// }
#include <stdio.h>

int MultiTwo(int x, int y) {
    return x * y;
}
int main() {
    printf("12 * 7 is: %d\n", MultiTwo(12, 7));
    return 0;
}