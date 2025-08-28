#include <stdio.h>
void access(int* ,int );
int searcharr(int*,int ,int);
void main() {
    int arr[10],n;

    printf("Enter elements:\n");
	access(arr,4);
    printf("Enter the number to search: ");
    scanf("%d", &n);
    int res=searcharr(arr,4,n);
    if(res==-1)
    	printf("%d is not found",n);
	else
	  	printf("%d is found",n);

}
void access(int* arr,int size)
{
		for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}
int searcharr(int* arr,int size ,int n)
{

    for(int i = 0; i < size; i++) {
        if(arr[i] == n) {
            return 1;
            
            
        }
    }
    	return -1;
    }

   

