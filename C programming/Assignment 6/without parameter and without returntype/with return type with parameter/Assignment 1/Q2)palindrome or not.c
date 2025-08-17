#include<stdio.h>
int palindrome();//declaration
void main()
{
	int no;
	printf("Enter a number::\n");
	scanf("%d",&no);
	if (palindrome(no))//call
	{
		printf("%d is palindrome",no);
	}
	else
	{
		printf("%d is not palindrome",no);
	}
}//main end here
int palindrome(int no)//defi
{
	int rev;
	int r1,r2,r3,q1;
	r1=no%10;
	q1=no/10;
	r2=q1%10;
	r3=q1/10;
	rev=r1*100+r2*10+r3;
	return rev == no;
	
}//defination end