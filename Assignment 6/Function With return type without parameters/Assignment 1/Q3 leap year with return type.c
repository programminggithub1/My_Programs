#include<stdio.h>
int leapyear();//declaration
void main()
{
	
	if(leapyear())//call
	printf(" leap year");
	else
	printf("not leap year");
}//main end here
int leapyear()//defi
{
	int year;
	printf("Enter a number\n");
	scanf("%d",&year);
	return year%4==0 && year%100!=0||year%400==0;

}//defination end