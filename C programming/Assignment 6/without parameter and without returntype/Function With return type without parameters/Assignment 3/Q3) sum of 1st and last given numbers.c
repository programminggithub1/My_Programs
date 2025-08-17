#include <stdio.h>
int sum( );
void main() 
{
	int res= sum();
	printf("Sum of numbers is = %d\n", res);
}
int sum()
{

    int sum = 0;
    int start, end;
	printf("Enter start and end number: ");
    scanf("%d %d", &start, &end);
    for (int i = start; i <= end; i++) {
        sum += i;
    }

return sum;

}