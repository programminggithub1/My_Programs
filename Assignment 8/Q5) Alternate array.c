#include <stdio.h>

void main() {
    int arr[5];
    printf("Enter  elements: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Alternate elements are:\n ");
    for (int i = 0; i < 5;i=i+2) {  
     
        printf("%d\n ", arr[i]);
    }
}
