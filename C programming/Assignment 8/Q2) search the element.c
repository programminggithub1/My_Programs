#include <stdio.h>

void main() {
    int arr[10], n, i, search, found = 0;

    printf("Enter size of array : ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &search);

    
    for(i = 0; i < n; i++) {
        if(arr[i] == search) {
            printf("Number %d found at position %d .\n", search, i+1, i);
            found = 1;
            break;  
        }
    }

    if(found == 0) {
        printf("Number %d not found in array.\n", search);
    }

   
}
