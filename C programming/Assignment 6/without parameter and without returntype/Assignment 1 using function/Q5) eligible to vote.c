#include<stdio.h>
void eligiblevote();//declaration
void main()
{
	eligiblevote();//call
}//main end here
void eligiblevote()//defi
{
	int Age = 20;
	if(Age >= 18)
	{
		printf("%d is Eligible to vote",Age);
	}
	else
	{
		printf("%d is not eligible to vote",Age);
	}
}//defination end