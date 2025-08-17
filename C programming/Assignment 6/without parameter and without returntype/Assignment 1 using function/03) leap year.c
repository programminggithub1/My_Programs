#include<stdio.h>
void leapyear();//declaration
void main()
{
	leapyear();//call
}//main end here
void leapyear()//defi
{
	int year=2004;
	if(year%4==0 && year%100!=0||year%400==0)
	{
		printf("%d is leap year",year);
	}
	else
	{
			printf("%d is not leap year",year);
	}
}//defination end