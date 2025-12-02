#include<stdio.h>
void acccesarr(int*,int);
int* maxarr(int*,int );
int* minarr(int*,int );
void main()
{
	int arr[4];
	printf("Enter a numbers::\n");
	
	acccesarr(arr,4);
	
    int res1=maxarr( arr,4);
    printf(" maximum number is: %d \n",res1);
    
	int res2=minarr( arr,4);
    printf(" minimum number is: %d \n",res2);
}
void acccesarr(int* ptr,int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ptr[i]);
	}
}
int* maxarr(int* ptr,int n)
{
	int max=ptr[0];
	for(int i=0;i<n;i++)
	{
		if(ptr[i] > max)
		{
			max=ptr[i];
		}
	}
	return max;
}
int* minarr(int* ptr,int n)
{
int min=ptr[0];
	for(int i=0;i<n;i++)
	{
	if(ptr[i] < min)
		{
			min=ptr[i];
		}
	return min;
}
}


	                                    