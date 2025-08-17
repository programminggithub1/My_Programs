#include<stdio.h>
void factorial(int );//ddeclaration
void main()
{
	int no;
	printf("Enter a number::\n");
	scanf("%d",&no);
	 factorial(no);//call
}//main end
void factorial(int no)//defi
{
	int fact=1;
	while(no >= 1)
	{
		fact=fact*no;
		no--;
	}
	printf("factorial of given no ::%d",fact);
}//defination end