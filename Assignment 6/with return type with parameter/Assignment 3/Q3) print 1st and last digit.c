#include <stdio.h>
int sum(int ,int );
void main() 
{
	int start, end;
	printf("Enter start and end number: ");
    scanf("%d %d", &start, &end);

	int res=sum(start,end);
	 printf("Sum of numbers from %d to %d = %d\n", start, end, res);
}
int sum(int start,int end)
{

    int sum = 0;
    for (int i = start; i <= end; i++) {
        sum += i;
    }

return sum;

}