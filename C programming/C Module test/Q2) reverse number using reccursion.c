#include <stdio.h>
void main()
{
    int n;
    printf("Enter a number::\n");
    scanf("%d",&n);
    reverse(n);
}
void reverse(int n)
{
    if (n == 0)
        return;

    printf("Reverse number is :: %d", n % 10);   
    reverse(n / 10);   
}


