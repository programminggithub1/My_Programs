#include <stdio.h>

void num(int); // declaration

void main()
{
    int n;
    printf("Enter  number: ");
    scanf("%d", &n);
    num(n); // call
}

void num(int n) // definition
{
    for (int k = 1; k <= n; k++)
    {
        int no = k;
        int count = 0;
        int temp = no;

        // Count digits
        while (no > 0)
        {
            count++;
            no = no / 10;
        }

        no = temp;
        int sum = 0, rem;

        // Calculate Armstrong sum
        while (no > 0)
        {
            rem = no % 10;
            int res = 1;

            for (int i = 1; i <= count; i++)
            {
                res *= rem;
            }

            sum += res;
            no = no / 10;
        }

        // Check Armstrong condition
        if (sum == temp)
        {
            printf("%d is Armstrong\n", temp);
        }
    }
}
