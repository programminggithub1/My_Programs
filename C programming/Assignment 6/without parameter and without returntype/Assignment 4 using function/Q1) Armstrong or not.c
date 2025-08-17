#include <stdio.h>

void armstrong(); // declaration

void main()
{
    armstrong(); // call
}

void armstrong() // definition
{
    int n = 1000; // fixed upper limit

    for (int k = 1; k <= n; k++)
    {
        int no = k, count = 0, temp = no;

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

        // Check Armstrong
        if (sum == temp)
        {
            printf("%d is Armstrong\n", temp);
        }
    }
}
