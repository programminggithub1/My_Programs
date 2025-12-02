#include<stdio.h>
int numbers();//declaration
void main()
{
	int res;
	 res =numbers();//call
	 printf(" %d",res);
}//main end
int numbers()//defi
{
	int no =1;
	while(no <=10)
	{
		printf(" %d",no);
		no++;
	}
	return no;
}//defination end