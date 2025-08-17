#include<stdio.h>
int getmarks(int);//declaration
void main()
{
	int marks;
	printf("Enter marks\n");
	scanf("%d",&marks);
	int res;
	 res= getmarks(marks);//call
	 if(res==1)
	 printf("Distinction");
	 else if(res==2)
	 printf("First Class");
	 else if(res==3)
	 printf("Second class");
	 else if(res==4)
	 printf("Pass");
	 else
	 printf("fail");
}//main end
int getmarks(int marks)//defi
{
	if(marks >= 75)
	{
		return 1;
	}
	else
	{
		if(marks >= 65)
		{
			return 2;
		}
		else
		{
			if(marks >= 55)
			{
				return 3;
			}
			else
			{
				if( marks >= 40)
				{
					return 4;
				}
				else
				{
					return 5;
				}
			}
		}	
}
}//defination end
