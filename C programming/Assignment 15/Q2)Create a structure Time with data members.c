#include <stdio.h>

typedef struct {
    int hrs;
    int min;
    int sec;
} Time;

// Function declarations
void accept(Time *t);
void display(Time t);
Time add(Time t1, Time t2);
int toSeconds(Time t);

void main() {
    Time t1, t2, sum;

    printf("Enter first time:\n");
    accept(&t1);

    printf("Enter second time:\n");
    accept(&t2);

    printf("\nFirst Time: ");
    display(t1);

    printf("Second Time: ");
    display(t2);

    sum = add(t1, t2);
    printf("\nSum of Times: ");
    display(sum);

    printf("\nFirst Time in seconds = %d\n", toSeconds(t1));
    printf("Second Time in seconds = %d\n", toSeconds(t2));
    printf("Sum in seconds = %d\n", toSeconds(sum));
}

// Function definitions
void accept(Time *t) {
    printf("Enter hours: ");
    scanf("%d", &t->hrs);
    printf("Enter minutes: ");
    scanf("%d", &t->min);
    printf("Enter seconds: ");
    scanf("%d", &t->sec);
}

void display(Time t) {
    printf("%02d:%02d:%02d\n", t.hrs, t.min, t.sec);
}

Time add(Time t1, Time t2) {
    Time result;
    result.sec = t1.sec + t2.sec;
    result.min = t1.min + t2.min + result.sec / 60;
    result.sec = result.sec % 60;
    result.hrs = t1.hrs + t2.hrs + result.min / 60;
    result.min = result.min % 60;
    return result;
}

int toSeconds(Time t) {
    return (t.hrs * 3600) + (t.min * 60) + t.sec;
}
