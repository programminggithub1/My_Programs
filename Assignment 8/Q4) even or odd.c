#include <stdio.h>

void main() {
	int arr[5];
    printf("Enter the numbers: ");

    for (int i = 1; i < 5; i++) {
    	scanf("%d",&arr[i]);
    }
    	for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d is Even\n", arr[i]);
        } else {
            printf("%d is Odd\n", arr[i]);
        }
    }

}
