#include <stdio.h>
void sum(int);//ddeclaration
void main() 
{
	int no;
	printf("Enter a number::\n");
	scanf("%d",&no);
	sum(no);//call
}//main end
void sum(int no)//defi
{
    int fd,ld;
    int sum=0;
    ld =no%10; 
	fd= no;
    while (no >= 10) 
	{
        no=no/10; 
           
    }
    fd=no;
    sum=fd+ld;
    printf("The sum of first and last digit is: %d\n", sum);

    
}//defination end