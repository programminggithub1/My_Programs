#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number::\n");
    scanf("%d", &n);

    int i = 1;
    while(i <= n)
    {
        printf("%d ", i);
        i = i + 2;   
    }
}
