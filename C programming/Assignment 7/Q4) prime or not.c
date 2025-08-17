#include<stdio.h>
void prime(int*,int*);//declaration
void main()
{
	int no,i;
	printf("Enter 1st number::\n");
	scanf("%d",&no);
	printf("Enter 2nd number::\n");
	scanf("%d",&i);
	prime(&no,&i);//call
}//main end
void prime(int* no,int* i)
{
	int flag=0;
	while (*i<(*no)/2)
	{
		if((*no)%(*i)==0)
		{
			flag=1;
			break;
		}
		(*i)++;
	}
	if(flag == 0)
	{
		printf("%d is prime",*no);
	}
	else
	{
	 printf("%d is not prime",*no);

	}
}