#include<stdio.h>
int table();//declaration
void main()
{
	int res;
	res= table();//call
	printf(" %d ",res);
}//main end
int table()//defi
{
	int no1=5,no2=1,no;
	while(no2<=10)
	{
		no=no1*no2;
		printf(" %d ",no);
		no2++;
	}
	return no;
}//defination end