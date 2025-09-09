#include <stdio.h>

void main()
{
    int start, end;

    printf("Enter start value: ");
    scanf("%d", &start);

    printf("Enter end value: ");
    scanf("%d", &end);

    if(start % 2 == 0)
    {
        printf("even: ");
        for(int i = start; i <= end; i++)
        {
            if(i % 2 == 0)
                printf("%d ", i);
        }
    }
    else 
    {
        printf("odd: ");
        for(int i = start; i <= end; i++)
        {
            if(i % 2 != 0)
                printf("%d ", i);
        }
    }
}
