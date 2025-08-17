#include<stdio.h>
void swapno(int ,int);//declaration
void main() 
{
	int No1, No2;
	printf("Enter 1st number:: ");
	scanf("%d",&No1);
	printf("Enter 1st number:: ");
	scanf("%d",&No2);
	printf("Before Swapping numbers is %d and %d \n",No1,No2);
	swapno(No1,No2);//call
}//end main
void swapno(int a,int b)//defi
{
	int Temp;
	Temp = a;
	a = b;
	b = Temp;
	printf("After Swapping numbers is %d and %d",a,b);
}//end defi