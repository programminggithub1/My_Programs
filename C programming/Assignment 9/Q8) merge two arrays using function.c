#include <stdio.h>
void access1(int*,int n);
void access2(int*,int n);
void equalarr(int* ,int*,int*,int ,int );
void mergearr(int* ,int,int );

void main() {
    int arr1[4], arr2[4], arr3[10];
    int n1, n2, i, j;
    printf("\nEnter number of elements in first array:\n ");
    access1(arr1,4);
    
    printf("\nEnter number of elements in second array:\n ");
    access2(arr2,4);
    
    equalarr(arr3, arr1,arr2,4,4);
    printf("\nMerged array: \n");
    mergearr( arr3 , 4,4 );
}
void access1(int* arr1,int n1)
    {
    	for (int i = 0; i < n1; i++) {
       	 scanf("%d", &arr1[i]);
    }
}
void access2(int* arr2,int n2)
    {
    	for (int i = 0; i < n2; i++) {
       	 scanf("%d", &arr2[i]);
    }
}
void equalarr(int* arr3,int* arr1,int* arr2,int n1,int n2)
{
	int i,j;
    for (i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }

    for (j = 0; j < n2; j++) {
        arr3[i] = arr2[j];
        i++;
    }
}
void mergearr(int* arr3,int n1,int n2 )
{

    
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");
}
