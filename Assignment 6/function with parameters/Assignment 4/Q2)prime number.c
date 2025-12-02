#include <stdio.h>
void prime(int);//declaration
int main()
 {
 	int n;
    printf("Enter  number: ");
    scanf("%d", &n);
 	 prime(n);//call
 }//main end
void prime(int n)//defi
{
    for(int i=1;i<=n;i++)
	{
        int j = 2;
        int cnt = 0;

        for (j=2;j <= i/2;j++) {
            if (i % j == 0) {
                cnt++;  
                break;
            }
           
       }
        

        if (cnt == 0) {
            printf("%d is  prime\n ", i);  
        }

       
    }
}//defination end


