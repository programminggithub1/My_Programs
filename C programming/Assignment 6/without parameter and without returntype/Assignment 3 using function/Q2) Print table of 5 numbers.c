#include<stdio.h>
void table();//declaration
void main()
{
	table();
}
void table()//defi
{
	int no1=5,no2=1,no;
	while(no2<=10)
	{
		no=no1*no2;
		printf(" %d ",no);
		no2++;
	}
	
}//end defi 