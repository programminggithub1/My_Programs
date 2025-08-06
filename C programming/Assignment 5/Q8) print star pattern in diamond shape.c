#include<stdio.h>
void main()
{
	int no=4;
	int count =1;
	for(int i=1;i<=no;i++)
	{
		for(int j=1;j<=no;j++)
		{
			if(j==1||i==j&& i<=no/2|| i+j==no&& i>=no/2+1)
			{
				printf("* ");
			}
		}
		printf("\n");
	}
}