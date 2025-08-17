#include<stdio.h>
void Arithoperators(int ,int,char );//declaration
void main() 
{
	int no1, no2;
	char ch;
	printf("Enter 1st number::\n");
	scanf("%d",&no1);
	printf("Enter 2nd number::\n");
	scanf("%d",&no2);
	printf("Enter operator::\n");
	scanf(" %c",&ch);
	 Arithoperators(no1,no2,ch );//call
}
void Arithoperators(int no1,int no2,char ch)//defi
{
	int res;
	//char ch;
	if(ch == '+')
	 {
		res=no1+no2;
		printf("Addition of %d and %d is:: %d",no1,no2,res);
	} 
	else 
	{
		if(ch == '-') 
		{
			res=no1-no2;
			printf("Substraction of %d and %d is:: %d",no1,no2,res);
		} 
		else 
		{
			if(ch == '*')
        	{
		        res=no1*no2;
	        	printf("Multiplication of %d and %d is:: %d",no1,no2,res);
        	}
        	else
        	{
			    if(ch == '/') 
			    {
				    res=no1/no2;
				    printf("Division of %d and %d is:: %d",no1,no2,res);
		     	} 
			else 
			{
				if(ch == '%') 
				{
					res=no1%no2;
					printf("Mod of %d and %d is:: %d",no1,no2,res);
				} else 
				{
					printf("Invalid Operator");
				}
			}
		}
	}
}
}//defination