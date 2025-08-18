#include <stdio.h>

void isPrime(int num) {
    if (num <= 1) 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) 
    }
    return 1; 
}

void main() {
    int arr[10], n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers in the array are: ");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}
