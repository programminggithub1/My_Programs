#include<stdio.h>
void getAge();//declaration
void main()
{
	int Age;
	printf("Enter a number::\n");
	scanf("%d",&Age);
	 getAge(Age);//call
}//main end
void getAge(int Age)//defi
{
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
	
