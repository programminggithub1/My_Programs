#include<stdio.h>
int armstrong(int);//declaration
void main()
{
	int no;
	printf("Enter a number\n");
	scanf("%d",&no);
	 if(armstrong(no))//call
	 printf("Armstrong");
	 else
	 printf("not Armstrong");
}//main end
int armstrong(int no)//defi
{
	int rem,sum=0;

	int temp=no;
	while(no > 0)
	{
		rem=no%10;
		sum=sum+rem*rem*rem;
		no=no/10;
	}
	return temp==sum;
	
}//defination end