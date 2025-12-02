#include<stdio.h>
void main()
{
	int no=13,i=2,flag=0;
	while (i<no/2)
	{
		if(no%i==0)
		{
			flag=1;
			break;
		}
		i++;
	}
	if(flag == 0)
	{
		printf("%d is prime",no);
	}
	else
	{
	 printf("%d is not prime",no);

	}
}