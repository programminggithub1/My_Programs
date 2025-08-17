#include<stdio.h>
void divisible();//declaration
void main()
{
	 divisible();//call
}//main end
void divisible()//defi
{
	int no = 6;
	if(no%3==0 && no%5==0)
	{
		printf("%d is divisible in both",no);
	}
	else
	{
		if(no%3==0)
		{
			printf("%d is divisible by 3 but not 5",no);
		}
		else
		{
			if(no%5==0)
			{
				printf("%d is divisible by 5 but not 3",no);
			}
			else
			{
				printf("%d is divisible by other",no);
			}
		}
	}	
}//defination end
	
