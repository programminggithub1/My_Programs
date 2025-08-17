#include<stdio.h>
int divisible();//declaration
void main()
{
	int res;
	 res=divisible();//call
	 if(res == 1)
	 printf(" divisible in both");
	else if(res==2)
	printf(" divisible by 3 but not 5");
	else if(res==3)
	printf("divisible by 5 but not 3");
	else
	printf(" divisible by other");
}//main end
int divisible()//defi
{
	int no ;
	printf("Enter a number\n");
	scanf("%d",&no);
	if(no%3==0 && no%5==0)
	{
		return 1;
	}
	else
	{
		if(no%3==0)
		{
			return 2;
		}
		else
		{
			if(no%5==0)
			{
				return 3;
			}
			else
			{
				return 4;
			}
		}
	}	
}//defination end
	
