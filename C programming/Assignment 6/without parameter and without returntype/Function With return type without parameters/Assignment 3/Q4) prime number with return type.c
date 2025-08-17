#include<stdio.h>
int prime();//declaration
void main()
{
	//call
	if(prime())
	printf("Prime");
	else
	printf("not prime");
}//main end
int prime()
{
	int no,i=2,flag=0;
	printf("Enter a number\n");
	scanf("%d",&no);
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