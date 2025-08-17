#include<stdio.h>
int getAge();//declaration
void main()
{
	int Age;
	printf("Enter Age\n");
	scanf("%d",&Age);
	int res;
	 res=getAge(Age);//call
	 if(res==1)
	 printf("Child");
	 else if(res==2)
	 printf("Teen Agers");
	 else if(res==3)
	 printf("Adult");
	 else
	 printf("Senior");
}//main end
int getAge(int Age)//defi
{
	if(Age <= 12)
	{
		return 1;
	}
	else
	{
		if(Age > 12 && Age <= 19)
		{
			return 2;
		}
		else
		{
			if(Age >= 20 && Age <= 59)
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
	
