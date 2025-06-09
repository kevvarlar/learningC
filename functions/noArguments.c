#include <stdio.h>
#include <time.h>

void GetDateTime(void);

int main() {
    printf("Before the GetDateTime() function is called\n");
    GetDateTime();
    printf("After the GetDateTime() function is called\n");
    return 0;
}

void GetDateTime(void) {
    time_t now;

    printf("Withing GetDateTime()\n");
    time(&now);
    printf("Current date and time is: %s\n", asctime(localtime(&now)));
}