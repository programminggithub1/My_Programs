#include<stdio.h>
int prime(int);//declaration
void main()
{
	int no;
	printf("Enter a number\n");
	scanf("%d",&no);
	//call
	if(prime(no))
	printf("Prime");
	else
	printf("not prime");
}//main end
int prime(int no)
{
	int i=2,flag=0;
	while (i<no/2)
	{
		if(no%i==0)
		{
			flag=1;
			break;
		}
		i++;
	}
	return flag == 0;
	
}