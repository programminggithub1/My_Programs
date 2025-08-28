#include <stdio.h>
int* sumarr(int* ,int );
void main() {
	int arr[5];
    printf("Enter the numbers: ");
    int res=sumarr(arr,5);
    printf("sum is %d",res);
}
int* sumarr(int* arr,int size)
{
int sum = 0;
    for (int i = 1; i < size; i++) {
    	scanf("%d",&arr[i]);
        sum = sum +arr[i]; 
    }
    return sum;
}

