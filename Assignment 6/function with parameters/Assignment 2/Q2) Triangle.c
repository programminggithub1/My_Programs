#include<stdio.h>
void tri1(int,int,int);//declaration
void main()
{
	int side1 ,side2,side3;
	printf("Enter 1st side::\n");
	scanf("%d",&side1);
	printf("Enter 2nd side::\n");
	scanf("%d",&side2);
	printf("Enter 3rd side::\n");
	scanf(" %d",&side3);
	 tri1(side1,side2,side3);//call
}//main end 
void tri1(int side1 ,int side2,int side3)//defi
{
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