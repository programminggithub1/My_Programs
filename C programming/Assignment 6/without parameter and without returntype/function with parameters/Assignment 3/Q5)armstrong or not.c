#include<stdio.h>
void armstrong(int);//declaration
void main()
{
	int no;
	printf("Enter a number::\n");
	scanf("%d",&no);
	 armstrong(no);//call
}//main end
void armstrong(int no)//defi
{
	int rem,sum=0;
	int temp=no;
	while(no > 0)
	{
		rem=no%10;
		sum=sum+rem*rem*rem;
		no=no/10;
	}
	if(temp==sum)
	{
		printf("%d is Armstrong",temp);
	}
	else
	{
		printf("%d is not Armstrong",temp);
	}
}//defination end