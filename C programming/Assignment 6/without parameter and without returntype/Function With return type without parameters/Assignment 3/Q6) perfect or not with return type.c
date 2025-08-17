#include<stdio.h>
int perfect();//declaration
void main()
{
	 if(perfect())//call
	 printf("perfect");
	 else
	 printf("not perfect");
}//main end
int perfect()//defi
{
	int no,i=1,sum=0;
	printf("Enter a number\n");
	scanf("%d",&no);
	while(i<no)
	{
		if(no%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	return sum ==no;
	
}//defination end