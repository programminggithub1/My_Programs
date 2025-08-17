#include<stdio.h>
int numbers(int);//declaration
void main()
{
	int no ;
	printf("Enter number");
	scanf("%d",&no);
	int res;
	 res =numbers(no);//call
	 printf(" %d",res);
}//main end
int numbers(int no)//defi
{
	while(no < 10)
	{
		printf(" %d",no);
		no++;
	}
	return no;
}//defination end