#include<stdio.h>
void numbers(int,int);//declaration
void main()
{
	int no, no2;
	printf("Enter 1st number::\n");
	scanf("%d",&no);
	printf("Enter 2nd number::\n");
	scanf("%d",&no2);
	 numbers(no,no2);//call
}//main end
void numbers(int no,int no2)//defi
{
	while(no <=no2)
	{
		printf(" %d",no);
		no++;
	}
}//defination end