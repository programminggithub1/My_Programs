#include<stdio.h>
void main() 
{
	int no1= 27, no2 =12,res;
	char ch ='%';
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
}