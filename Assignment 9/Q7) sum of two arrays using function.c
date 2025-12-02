#include<stdio.h>
void access(int* ,int );
void access1(int* ,int );
void sumarr(int*,int,int*,int* );
void displaysum(int*,int);
//void resarr(int* arr,int n)

void main()
{
	int arr[4],brr[4],crr[4];
	printf("Enter the numbers: ");
	access(arr,4);
	printf("Enter the numbers: ");
	access1(brr,4);
	
    sumarr(crr,4,brr,arr);
    printf("sum of two arrays:: ");
    displaysum(crr,4);
    
}
void access(int* arr,int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
}
void access1(int* brr,int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&brr[i]);
	}
}
void sumarr(int* crr,int n,int* brr,int* arr)
{
	int  i;
	for( i=0;i<n;i++)
	{
		crr[i]=arr[i]+brr[i];
		
	}
}
void displaysum(int* crr,int n)
{
	for( int i=0;i<n;i++)
	{
		printf(" %d",crr[i]);
	}
}


	
	
	
	
	