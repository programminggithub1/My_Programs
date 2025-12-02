#include<stdio.h>
void factorial();//ddeclaration
void main()
{
	 factorial();//call
}//main end
void factorial()//defi
{
	int no=7,fact=1;
	while(no >= 1)
	{
		fact=fact*no;
		no--;
	}
	printf("factorial of given no ::%d",fact);
}//defination end