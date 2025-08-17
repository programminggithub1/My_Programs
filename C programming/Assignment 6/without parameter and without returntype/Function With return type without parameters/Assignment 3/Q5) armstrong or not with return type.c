#include<stdio.h>
int armstrong();//declaration
void main()
{

	 if(armstrong())//call
	 printf("Armstrong");
	 else
	 printf("not Armstrong");
}//main end
int armstrong()//defi
{
	int no,rem,sum=0;
	printf("Enter a number\n");
	scanf("%d",&no);
	int temp=no;
	while(no > 0)
	{
		rem=no%10;
		sum=sum+rem*rem*rem;
		no=no/10;
	}
	return temp==sum;
	
}//defination end