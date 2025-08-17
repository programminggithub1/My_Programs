#include<stdio.h>
int palindrome();//declaration
void main()
{
	//int res;
	//res = palindrome();//call
	if(palindrome())
	printf("number is palindrome");
	else
	printf("number is not palindrome");
}//main end here
int palindrome()//defi
{
	int no,rev;
	int r1,r2,r3,q1;
	printf("Enter a number\n");
	scanf("%d",&no);
	r1=no%10;
	q1=no/10;
	r2=q1%10;
	r3=q1/10;
	rev=r1*100+r2*10+r3;
	return rev == no;
	//{
	//	return 1;
	//}
	//else
	//{
	//	return 0;
	//}
}//defination end