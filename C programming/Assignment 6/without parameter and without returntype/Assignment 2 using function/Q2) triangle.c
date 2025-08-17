#include<stdio.h>
void tri1();//declaration
void main()
{
	 tri1();//call
}//main end 
void tri1()//defi
{
	int side1 =11,side2=11,side3=12;
	if(side1==side2 && side2==side3)
	{
		printf("equilateral triangle");
	}
	else
	{
		if(side1==side2||side1==side3||side2==side3)
		{
			printf("isosceles triangle");
		}
		else
		{
			printf("scalene triangle");
		}
	}
}//defination end