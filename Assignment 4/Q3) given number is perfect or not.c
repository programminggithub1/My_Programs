#include<stdio.h>
void main()
{
	for(int k=1;k<=1000;k++)
	{
	int no=k;
	int sum=0;
	int i=1;
	
	while( i < no)
	{
		
		
			if(no % i == 0)
			{
			sum = sum + i;	
			}
		
		 i++;
	}
		if(sum == no)
		{
			printf("%d is perfect \n", no);
		}
	
	
}
}