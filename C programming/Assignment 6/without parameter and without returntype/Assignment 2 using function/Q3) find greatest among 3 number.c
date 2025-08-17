#include<stdio.h>
void number();//declaration
void main()
{
	 number();//call
}//main end
void number()//defi
{
	int a= 45,b=21, c=66;
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