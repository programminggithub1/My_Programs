#include <stdio.h>
void access(int* ,int );
int primeno(int* ,int );
void main() {
	
    int arr[10];
	printf("Enter elements: \n"); 
	access(arr,10);
    primeno(arr,10);
}
void access(int* arr,int size)
{
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}
int primeno(int* arr,int size)
{
    int i,j,isPrime=1;
    for (i = 0; i < size; i++) {
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
            printf("\n%d is prime\n",arr[i]);
        }
    }

    
}
