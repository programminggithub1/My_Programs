#include <stdio.h>
int strong();//ddeclaration
void main()
{
 	if(strong())//call
 	printf("Strong");
 	else
 	printf("not Strong");
}//main end
int strong()//defi
{

    int num;
	printf("Enter a number\n");
	scanf("%d",&num);               
    int original_no = num;
    int ld, sum = 0;

    while (num > 0) {
        ld = num % 10;

        int fact = 1;
        for (int i = 1; i <= ld; i++) {
            fact =fact* i;          
        }

        sum =sum+ fact;             
        num =num /10;               
    }

  return original_no == sum;
        

    
}//defination end
