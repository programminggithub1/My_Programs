#include <stdio.h>
void sum();
void main() 
{
	 sum();
}
void sum()
{

    int start, end, sum = 0;

    printf("Enter start and end number: ");
    scanf("%d %d", &start, &end);

    for (int i = start; i <= end; i++) {
        sum += i;
    }

    printf("Sum of numbers from %d to %d = %d\n", start, end, sum);


}