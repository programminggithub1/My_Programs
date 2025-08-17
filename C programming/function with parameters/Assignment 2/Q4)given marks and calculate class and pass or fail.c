#include<stdio.h>
void getmarks(int);//declaration
void main()
{
	int marks;
	printf("Enter marks::\n");
	scanf("%d",&marks);
	 getmarks(marks);//call
}//main end
void getmarks(int marks)//defi
{
	if(marks >= 75)
	{
		printf("Distinction");
	}
	else
	{
		if(marks >= 65)
		{
			printf("First Class");
		}
		else
		{
			if(marks >= 55)
			{
				printf("Second class");
			}
			else
			{
				if( marks >= 40)
				{
					printf("Pass");
				}
				else
				{
					printf("fail");
				}
			}
		}	
}
}//defination end
