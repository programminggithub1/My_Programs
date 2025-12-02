#include<stdio.h>
int tri1();//declaration
void main()
{
	int res;
	 res =tri1();//call
	 if(res==1)
	 {
	 	printf("equilateral triangle");
	 }
	 else if(res==2)
	 {
	 	printf("isosceles triangle");
	 }
	 else
	 {
	 printf("scalene triangle");
}
}//main end 
int tri1()//defi
{
	int side1 ,side2,side3;
	printf("Enter 3 sides of triangle\n");
	scanf("%d %d %d",&side1,&side2,&side3);
	if(side1==side2 && side2==side3)
	{
		return 1;
	}
	else
	{
		if(side1==side2||side1==side3||side2==side3)
		{
				return 2;
		}
		else
		{
				return 3;
		}
	}
}//defination end