#include<stdio.h>
void main()
{
	int no=153,rem,sum=0;
	int temp=no;
	while(no > 0)
	{
		rem=no%10;
		sum=sum+rem*rem*rem;
		no=no/10;
	}
	if(temp==sum)
	{
		printf("%d is Armstrong",temp);
	}
	else
	{
		printf("%d is not Armstrong",temp);
	}
}