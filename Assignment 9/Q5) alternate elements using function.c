#include <stdio.h>
void access(int* ,int );
void alternate(int *,int );
void main() {
    int arr[5];
    printf("Enter  elements:\n ");
    access(arr,5);
    printf("alternate elements are::\n");
    alternate(arr,5);
    
}
void access(int* arr,int size)
{
	for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}
void alternate(int *arr,int size)
{
    for (int i = 0; i < size;i=i+2) {  
     
        printf("%d\n ", arr[i]);
    }
}
