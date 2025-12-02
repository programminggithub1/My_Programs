#include<stdio.h>
void perfect(int*);//declaration
void main()
{
	int no;
	printf("Enter 1st number::\n");
	scanf("%d",&no);
	
	 perfect(&no);//call
}//main end
void perfect(int* no)//defi
{
	int sum=0,i=1;

	while(i<*no)
	{
		if((*no)%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	if(sum ==*no)
	{
		printf("%d is perfect number",*no);
	}
	else
	{
		printf("%d is not perfect number",*no);
	}
}//defination end