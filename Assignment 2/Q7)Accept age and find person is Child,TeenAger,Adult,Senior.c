#include<stdio.h>
void main()
{
	int Age = 25;
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
}