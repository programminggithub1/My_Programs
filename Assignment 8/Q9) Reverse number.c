#include <stdio.h>

void main() {
    int arr[5];

    printf("Enter elements: \n");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Reversed array: \n");
    for (int i = 4 - 1; i >= 0; i--) {
        printf("%d \n", arr[i]);
    }
    //printf("\n");
}