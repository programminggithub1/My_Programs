#include<stdio.h>
int num();
void main()
{
	int res;
	res=num();
	if(res==1)
	{
		printf(" nutral");
	}
	else if(res==2)
	{
		printf(" positive");
	}
	else
	{
		printf(" negative");
	}
}
int num()
{
	int no;
	printf("Enter a number\n");
	scanf("%d",&no);
	if(no==0)
	{
		return 1;
	}
	else if(no>0)
	{
		return 2;
	}
	else
	{
		return 3;
	}
}