#include<stdio.h>
void main()
{
	int no=4;
	int count =1;
	for(int i=1;i<=no;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d ",count);
			count++;
		}
		printf("\n");
	}
}