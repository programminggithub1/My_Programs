#include<stdio.h>
void main()
{
	int no=7,fact=1;
	while(no >= 1)
	{
		fact=fact*no;
		no--;
	}
	printf("factorial of given no ::%d",fact);
}