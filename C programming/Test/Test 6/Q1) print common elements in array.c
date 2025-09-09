#include<stdio.h>
void main()
{
	int arr[4];
	int brr[4];
	printf("Enter array  of 4 elements::\n \n ");
	
	for( int i=0;i<4;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int  i=0;i<4;i++)
	{
		printf(" %d ",arr[i]);
	}
		printf("\nEnter array  of 4 elements::\n \n ");
	for( int i=0;i<4;i++)
	{
		scanf("%d",&brr[i]);
	}
	for( int i=0;i<4;i++)
	
		printf(" %d ",brr[i]);
	
	printf("\ncommon elements are::\n");
	for( int i=0;i<4;i++)
	{
		if(arr[i]==brr[i])
		printf("%d ",arr[i] );
	}
    
}