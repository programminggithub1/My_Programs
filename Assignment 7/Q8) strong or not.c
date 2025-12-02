#include <stdio.h>
void strong(int*);//ddeclaration
void main()
{
	int num ;
	printf("Enter a number::\n");
	scanf("%d",&num);
 	strong( &num);//call
}//main end
void strong(int* num)//defi
{               
    int original_no = *num;
    int ld, sum = 0;

    while (*num > 0) {
        ld = (*num) % 10;

        int fact = 1;
        for (int i = 1; i <= ld; i++) {
            fact =fact* i;          
        }

        sum =sum+ fact;             
        *num =(*num) /10;               
    }

    if (original_no == sum) {
        printf("%d is a Strong number\n", original_no);
    } else {
        printf("%d is not a Strong number\n", original_no);
    }

    
}//defination end
