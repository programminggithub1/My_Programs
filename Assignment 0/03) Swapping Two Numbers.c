#include<stdio.h>
#include<conio.h>
void main() 
{
	int No1 = 10, No2= 20, Temp;
	printf("Before Swapping numbers is %d and %d \n",No1,No2);
	Temp = No1;
	No1 = No2;
	No2 = Temp;
	printf("After Swapping numbers is %d and %d",No1,No2);

}