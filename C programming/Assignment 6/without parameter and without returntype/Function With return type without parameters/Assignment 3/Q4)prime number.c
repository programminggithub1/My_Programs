#include<stdio.h>
int prime();//declaration
void main()
{
	int res;
	 res=prime();//call
	 if( res == 1)
	 {
	 	printf(" is prime");
	 }
	 else
	 {
	 	printf(" is not prime");
	 }
}//main end
int prime()//defi
{
	int no,i=2,flag=0;
	printf("Enter a number\n");
	scanf("%d",&no);
	while (i<no/2)
	{
		if(no%i==0)
		{
			flag=1;
			break;
	}
		i++;
	}
	if(flag == 0)
	{
		return 1;
	}
	else
	{
	 return 0;

	}
}//defination end