#include<stdio.h>
void evenodd(int);//declaration
void main()
{
	int No;
	printf("Enter a number::\n");
	scanf("%d",&No);
	evenodd(No);//call
}//main end here
void evenodd(int No)//defi
{

	if( No%2==0)
	{
		printf("%d is Even number",No);
	}
	else
	{
		printf("%d is Odd number",No);
	}
}//defination