#include<stdio.h>
void main()
{
	int arr[4];
	printf("Enter array  of 4 elements::\n ");
	int brr[4];
	
	int crr[4];
	for(int i=0;i<4;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter array  of 4 elements::\n \n ");
	for(int i=0;i<4;i++)
	{
		scanf("%d",&brr[i]);
	}
	for(int i=0;i<4;i++)
	{
		crr[i]=arr[i]+brr[i];
	}
	for(int i=0;i<4;i++)
	{
	printf("%d",crr[i]);
}
}

	
	
	
	
	