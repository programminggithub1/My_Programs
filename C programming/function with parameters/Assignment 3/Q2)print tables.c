#include<stdio.h>
void table(int,int);//declaration
void main()
{
	int no1,no2;
	printf("Enter 1st number::\n");
	scanf("%d",&no1);
	printf("Enter 2nd number::\n");
	scanf("%d",&no2);
	table(no1,no2);
}
void table(int no1,int no2)//defi
{
	int no;
	while(no2<=10)
	{
		no=no1*no2;
		printf(" %d ",no);
		no2++;
	}
	
}//end defi 