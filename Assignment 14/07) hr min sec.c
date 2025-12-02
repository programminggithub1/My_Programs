#include <stdio.h>

// structure definition
struct Time {
    int hour;
    int min;
    int sec;
};

void main() {
    struct Time t1;   

    printf("Enter hour (0-23): ");
    scanf("%d", &t1.hour);

    printf("Enter minute (0-59): ");
    scanf("%d", &t1.min);

    printf("Enter second (0-59): ");
    scanf("%d", &t1.sec);

    printf("\n--- Time ---\n");
    printf("%02d:%02d:%02d\n", t1.hour, t1.min, t1.sec);


}
