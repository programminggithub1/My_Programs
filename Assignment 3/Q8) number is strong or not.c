#include <stdio.h>

void main() {
    int num = 145;               
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

    if (original_no == sum) {
        printf("%d is a Strong number\n", original_no);
    } else {
        printf("%d is not a Strong number\n", original_no);
    }

    
}
