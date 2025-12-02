#include<stdio.h>
void main()
{
	int no=5;
	for(int i=1;i<=no;i++)
	{
		for(int j=1;j<=no;j++)
		{
			if(i==1||j==1||j==no||i==no||i==j)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}