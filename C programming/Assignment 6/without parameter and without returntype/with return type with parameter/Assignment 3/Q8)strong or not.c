#include <stdio.h>
int strong(int);//ddeclaration
void main()
{
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);   
 	if(strong(num))//call
 	printf("Strong");
 	else
 	printf("not Strong");
}//main end
int strong(int num)//defi
{            
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
