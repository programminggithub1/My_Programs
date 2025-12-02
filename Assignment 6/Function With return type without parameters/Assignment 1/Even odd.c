#include<stdio.h>
int evenodd();//declaration
void main()
{
	int res;
	res=evenodd();//call
	if(res==1)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}//main end here
int evenodd()//defi
{

	int no;
	printf("Enter a number\n");
	scanf("%d",&no);
	if( no%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}//defination