#include<stdio.h>

void main()
{
	int arr[4];
	printf("Enter array  of 4 elements::\n \n ");
	
	for(int i=0;i<4;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<4;i++)
	{
		printf("\n%d",arr[i]);
	}
	int max1=arr[0], max2=arr[1];
	for(int i=1;i<4;i++)
	{
		if(arr[i] > max1)
		
			max1=arr[i];
		
		else if(arr[i] >max2)
		
			max2=arr[i];
		
			
	}
	
	printf("\nfirst max number is:: %d \nsecond max number is:: %d\n",max1,max2);

}
	
