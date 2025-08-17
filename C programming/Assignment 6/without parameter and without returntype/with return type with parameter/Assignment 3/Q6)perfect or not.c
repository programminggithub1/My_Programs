#include<stdio.h>
int perfect(int);//declaration
void main()
{
	int no;
	printf("Enter a number\n");
	scanf("%d",&no);
	 if(perfect(no))//call
	 printf("perfect");
	 else
	 printf("not perfect");
}//main end
int perfect(int no)//defi
{
	int i=1,sum=0;
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