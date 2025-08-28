#include <stdio.h>
void access(int* ,int );
void reverse(int*  ,int );
void main() {
    int arr[5];
    printf("Enter elements: \n");
	access(arr,5);
	printf("Reversed array: \n");
	reverse(arr,5);
	
}
void access(int* arr,int n)
{
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}
void reverse(int* arr ,int n)
    {
	
    for (int i = n - 1; i >= 0; i--) {
        printf("%d \n", arr[i]);
        
    }
}