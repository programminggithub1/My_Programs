#include <stdio.h>
void sum();//ddeclaration
void main() 
{
	sum();//call
}//main end
void sum()//defi
{
    int no = 1235,fd,ld;
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