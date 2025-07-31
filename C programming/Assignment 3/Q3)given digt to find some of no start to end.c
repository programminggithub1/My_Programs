#include <stdio.h>

int main() {
    int start = 1;
    int end = 5;
    int sum = 0;
    int no = start; 
    while (no <= end) 
	{
        sum =sum+ no; 
        no++;     
    }

    printf("The sum of numbers from %d to %d is: %d\n", start, end, sum);

    
}