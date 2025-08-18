#include<stdio.h>
void main()
{
	int arr[4];
	printf("Enter array  of 4 elements::\n \n ");
	int max=arr[0];
	int min=arr[0];
	for(int i=1;i<4;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=1;i<4;i++)
	{
		if(arr[i] > max)
		{
			max=arr[i];
		}
		if(arr[i] < min)
		{
			min=arr[i];
		}
	}
	printf(" maximum number is:%d \n",max);
	printf(" minimumS number is:%d",min);
	
}
	                                    