#include <stdio.h>

void main() {
    int arr[10], n, i, j, isPrime;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for (i = 0; i < n; i++) {
        if (arr[i] <= 1) {
            continue; 
        }
        isPrime = 1; 
        for (j = 2; j <= arr[i] / 2; j++) {
            if (arr[i] % j == 0) {
                isPrime = 0; 
                break;
            }
        }
        if (isPrime == 1) {
            printf(" %d is prime ", arr[i]);
        }
    }

    
}
