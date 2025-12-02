#include <stdio.h>

void main() {
    int sum = 0;
	int arr[5];
    printf("Enter the numbers: ");

    for (int i = 1; i < 5; i++) {
    	scanf("%d",&arr[i]);
        sum = sum +arr[i]; 
    }

    printf("Sum of numbers is: %d\n", sum);

}
