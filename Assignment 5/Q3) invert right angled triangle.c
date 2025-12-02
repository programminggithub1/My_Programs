#include<stdio.h>
void main()
{
	int no=5;
	for(int i=1;i<=no;i++)
	{
		for(int j=5;j>=i;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
}