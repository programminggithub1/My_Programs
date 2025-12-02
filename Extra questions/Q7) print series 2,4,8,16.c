#include<stdio.h>
void main()
{
	int no,temp=2;
	printf("Enter number::\n");
	scanf("%d",&no);
	for(int i=0;i<no;i++)
	{
		printf("%d\n",temp);
		temp=temp*2;
	}
}