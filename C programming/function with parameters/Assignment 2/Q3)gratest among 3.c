#include<stdio.h>
void number(int,int,int);//declaration
void main()
{
	int a,b, c;
	printf("Enter 1st number::\n");
	scanf("%d",&a);
	printf("Enter 2nd number::\n");
	scanf("%d",&b);
	printf("Enter 3rd number::\n");
	scanf(" %d",&c);
	 number(a,b,c);//call
}//main end
void number(int a,int b,int c)//defi
{
	if(a>b)
	{
		if(a> c)
		{
			printf("a is greater");
		}
		else
		{
			printf("c is greater");
		}
	}
	else
	{
		if(b>c)
		{
			printf("b is greater");
		}
		else
		{
			printf("c is greater");
		}
	}
	
}//defination end