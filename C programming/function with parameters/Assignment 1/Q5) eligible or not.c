#include<stdio.h>
void eligiblevote();//declaration
void main()
{
	int Age ;
	printf("Enter an age::\n");
	scanf("%d",&Age);
	eligiblevote(Age);//call
}//main end here
void eligiblevote(int Age)//defi
{
	if(Age >= 18)
	{
		printf("%d is Eligible to vote",Age);
	}
	else
	{
		printf("%d is not eligible to vote",Age);
	}
}//defination end