#include <stdio.h>

int main() {
	
    for(int i=1;i<=1000;i++)
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
    }


