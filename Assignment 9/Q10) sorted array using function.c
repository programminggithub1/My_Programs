#include <stdio.h>
void access(int* ,int );
void array(int* ,int );
void sortarray(int* ,int );
void main() {
    int arr[50], n, temp;

    printf("Enter number of elements: ");
	access(arr,5);
	
	array(arr,5);
	printf("Sorted array in ascending order: ");
	sortarray(arr,5);
}
void access(int* arr,int n)
{
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}
void array(int* arr,int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void sortarray(int* arr,int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
