#include<stdio.h>
void main()
{
	int year = 2055;
	if(year%4==0 && year%100!=0 || year%400==0)
	{
		printf("It is leap year");
	}
	else
	{
		printf("It is not leap year");
	}
}