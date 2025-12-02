#include<stdio.h>
int eligiblevote(int Age);//declaration
void main()
{
	int Age;
	printf("Enter an Age::\n");
	scanf("%d",&Age);
	if(eligiblevote(Age))//call
	{
		printf("%d is Eligible to vote",Age);
	}
	else
	{
		printf("%d is not eligible to vote",Age);
	}
}//main end here
int eligiblevote(int Age)//defi
{
	return Age >= 18;
	
}//defination end