#include<stdio.h>
void perfect(int);//declaration
void main()
{
	int n;
    printf("Enter  number: ");
    scanf("%d", &n);
	 perfect(n);//call
}//main end
void perfect(int n)//defi
{
	for(int k=1;k<=n;k++)
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
	
}//end defination
}