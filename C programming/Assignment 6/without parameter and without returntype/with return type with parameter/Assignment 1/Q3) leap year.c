#include<stdio.h>
int leapyear(int );//declaration
void main()
{
	int year;
	printf("Enter a year::\n");
	scanf("%d",&year);
	if(leapyear(year))//call
	{
		printf("%d is leap year",year);
	}
	else
	{
			printf("%d is not leap year",year);
	}
}//main end here
int leapyear(int year)//defi
{
	return year%4==0 && year%100!=0||year%400==0;
	
}//defination end