#include <stdio.h>
void accessarr(int* ,int );
void evenodd(int* ,int );

void main() {
	int arr[5];
    printf("Enter the numbers: ");
    accessarr(arr, 5);
	evenodd(arr,5);	
}
void accessarr(int* arr,int size)
{
    for (int i = 1; i < size; i++) {
    	scanf("%d",&arr[i]);
    }
}
void evenodd(int* arr,int size)
{
    	for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d is even\n", arr[i]);
        } else {
            printf("%d is odd\n", arr[i]);
        }
    }

}
