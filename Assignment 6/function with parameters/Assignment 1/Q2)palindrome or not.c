#include<stdio.h>
void palindrome(int);//declaration
void main()
{
	int no;
	printf("Enter a number::\n");
	scanf("%d",&no);
	palindrome(no);//call
}//main end here
void palindrome(int no)//defi
{
	int rev;
	int r1,r2,r3,q1;
	r1=no%10;
	q1=no/10;
	r2=q1%10;
	r3=q1/10;
	rev=r1*100+r2*10+r3;
	if(rev == no)
	{
		printf("%d is palindrome",rev);
	}
	else
	{
		printf("%d is not palindrome",rev);
	}
}//defination end