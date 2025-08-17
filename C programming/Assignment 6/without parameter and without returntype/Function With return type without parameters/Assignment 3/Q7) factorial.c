#include<stdio.h>
int factorial();//ddeclaration
void main()
{
	int res;
	 res = factorial();//call
	 printf("factorial of given no ::%d",res);
}//main end
int factorial()//defi
{
	int no=7,fact=1;
	while(no >= 1)
	{
		fact=fact*no;
		no--;
	}
	return fact;
}//defination end