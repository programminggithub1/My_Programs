#include <stdio.h>

void main() {
    int start, end;

    printf("Enter start of range: ");
    scanf("%d", &start);

    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("\nFactors of numbers from %d to %d:\n", start, end);

    for (int num = start; num <= end; num++) {
        printf("Factors of %d: ", num);
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

}
