#include<stdio.h>
void main()
{
	int no=6,i=1,sum=0;

	while(i<no)
	{
		if(no%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	if(sum ==no)
	{
		printf("%d is perfect no",no);
	}
	else
	{
		printf("%d is not perfect no",no);
	}
}