#include<stdio.h>
int evenodd(int);//declaration
void main()
{
	int no = 20;
	printf("Enter a number::\n");
	scanf("%d",&no);
	if(evenodd(no))//call
	printf(" is Even number");
	else	
	printf("is Odd number");
	
}//main end here
int evenodd(int no)//defi
{
	return  no%2==0;
	
}//defination