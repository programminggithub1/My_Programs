#include<stdio.h>
void getavg(int No1,int No2,int No3,int No4, int No5);
void main() 
{
	int No1 , No2 , No3 , No4 , No5 ;
	printf("Enter 5 numbers::\n");
	scanf("%d %d %d %d %d",&No1 , &No2 , &No3 , &No4 , &No5);
	 getavg( No1, No2, No3, No4,  No5);

}
void getavg(int No1,int No2,int No3,int No4, int No5)
{

	int Sum = No1+No2+No3+No4+No5;
	
	printf("Sum of five numbers is :: %d \n  ",Sum);

	float Average= Sum/5.0;
	printf("Total Average is :: %f   ",Average);
}
