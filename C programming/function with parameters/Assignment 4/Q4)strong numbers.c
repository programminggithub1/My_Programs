#include <stdio.h>
void strong(int);//declaration
void main()
 {
 	int n;
    printf("Enter  number: ");
    scanf("%d", &n);
 	 strong(n);//call
 }//main end
void strong(int n)//defi
{
	int  temp, digit;
    for(int k=1;k<=n;k++)
    {
	
        int no = k;
        int sum=0;
        while (no > 0) {
            digit = no % 10;

           int fact = 1;
           
            for (int i = 1; i <= digit; i++) {
                fact =fact * i;
               
            }

            sum += fact;
            no = no / 10;
        }

        if (sum == k) {
            printf("%d  is strong no \n", sum);
        }
        
    }  
}//end defination
