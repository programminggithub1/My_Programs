#include<stdio.h>
void getadd(int,int);//declaration
void main()
{
	
	int No1,No2;
	printf("Enter first number:: ");
	scanf("%d",&No1);
	printf("Enter second number:: ");
	scanf("%d",&No2);
	getadd( No1, No2);//call
	
}//end main 
void getadd(int a,int b)//defi
{
	int c = a + b;
	printf("Addition of %d and %d is:: %d",a,b,c);
}//end defi