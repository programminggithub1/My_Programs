#include<stdio.h>
int factorial(int);//ddeclaration
void main()
{
	int no;
	printf("Enter number::\n");
	scanf("%d",&no);
	int res;
	 res = factorial(no);//call
	 printf("factorial of given no ::%d",res);
}//main end
int factorial(int no)//defi
{
	int fact=1;
	while(no >= 1)
	{
		fact=fact*no;
		no--;
	}
	return fact;
}//defination end