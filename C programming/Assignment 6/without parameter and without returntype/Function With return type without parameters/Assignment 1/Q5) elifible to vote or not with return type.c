#include<stdio.h>
int eligiblevote();//declaration
void main()
{
	if(eligiblevote())//call
	printf("Eligible to vote");
	else
	printf("not Eligible to vote");
	
}//main end here
int eligiblevote()//defi
{
	int Age ;
	printf("Enter a Age\n");
	scanf("%d",&Age);
	return Age >= 18;
	
}//defination end