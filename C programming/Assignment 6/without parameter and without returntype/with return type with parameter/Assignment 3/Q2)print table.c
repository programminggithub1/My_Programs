#include<stdio.h>
int table(int,int);//declaration
void main()
{
	int no1,no2,no;
	printf("Enter no1 and no2::\n");
	scanf("%d %d",&no1,&no2);
	int res;
	res= table(no1,no2);//call
	printf(" %d ",res);
}//main end
int table(int no1 ,int no2)//defi
{
	int no;
	while(no1<10)
	{
		no=no2*no1;
		printf(" %d ",no);
		no1++;
	}
	return no;
}//defination end