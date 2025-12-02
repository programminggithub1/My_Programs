#include <stdio.h>

// function declaration
void sumRange(int* start, int* end);

int main() {
    int start, end;

    printf("Enter start and end number: ");
    scanf("%d %d", &start, &end);

    // call function
    sumRange(&start, &end);
}
void sumRange(int* start, int* end) {//defination
    int sum = 0;
    for (int i = *start; i <= *end; i++) {
        sum =sum + i;
    }
    printf("Sum of numbers from %d to %d = %d\n", *start, *end, sum);
}

