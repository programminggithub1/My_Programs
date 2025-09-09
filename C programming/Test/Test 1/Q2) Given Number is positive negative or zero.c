#include<stdio.h>
void main()
{
	int no;
	printf("Enter a number");
	scanf("%d",&no);
	if(no==0)
	{
		printf("%d is nutral",no);
	}
	else if(no>0)
	{
		printf("%d is positive",no);
	}
	else
	{
		printf("%d is negative",no);
	}
}