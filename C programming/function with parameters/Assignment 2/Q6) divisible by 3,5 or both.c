#include<stdio.h>
void divisible(int);//declaration
void main()
{
	int no;
	printf("Enter a number::\n");
	scanf("%d",&no);
	 divisible(no);//call
}//main end
void divisible(int no)//defi
{
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
	
