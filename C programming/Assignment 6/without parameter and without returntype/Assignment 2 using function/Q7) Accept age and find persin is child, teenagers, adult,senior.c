#include<stdio.h>
void Age();//declaration
void main()
{
	 Age();//call
}//main end
void Age()//defi
{
	int Age = 11;
	if(Age <= 12)
	{
		printf("Child");
	}
	else
	{
		if(Age > 12 && Age <= 19)
		{
			printf("Teen Agers");
		}
		else
		{
			if(Age >= 20 && Age <= 59)
			{
				printf("Adult");
			}
			else
			{
				printf("Senior");
			}
		}
	}
}//defination end
	
