#include <stdio.h>

int Arithoperators(); // declaration

int main()
{
    int result;
    result = Arithoperators(); // function call
    printf("Result is: %d\n", result);
    
}

int Arithoperators() // definition
{
    int no1 , no2 , res;
    printf("Enter 1st and 2nd number");
    scanf("%d %d",&no1,&no2);
    char ch;

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &ch); 

    if (ch == '+')
        res = no1 + no2;
    else if (ch == '-')
        res = no1 - no2;
    else if (ch == '*')
        res = no1 * no2;
    else if (ch == '/')
        res = no1 / no2;
    else if (ch == '%')
        res = no1 % no2;
    else
    {
        printf("Invalid Operator\n");
        return 0; 
    }

    return res; 
}// end defi
