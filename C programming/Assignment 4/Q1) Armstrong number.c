#include<stdio.h>
void main()
{
	for(int k=1;k<=1000;k++)
	{
		int no=k;
		int count=0;
		int temp=no;
		while(no> 0)
		{
			count++;
			no=no/10;
		}
		no=temp;
		int sum=0,rem;
		while(no>0)
		{
			int res=1;
			rem=no%10;
			for(int i=1;i<=count;i++)
			{
				res=res*rem;
				sum=sum+res;
				no=no/10;
			}
			if(sum==temp)
			{
				printf("%d is armstrong\n",temp);
			}
		}
	}
}