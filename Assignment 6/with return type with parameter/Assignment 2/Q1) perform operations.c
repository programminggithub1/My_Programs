#include <stdio.h>

int Arithoperators(int ,int,char); // declaration

int main()
{
	int no1 , no2 ;
    printf("Enter 1st and 2nd number");
    scanf("%d %d",&no1,&no2);
    char ch;

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &ch); 

    int result;
    result = Arithoperators(no1,no2,ch); // function call
    printf("Result is: %d\n", result);
    
}

int Arithoperators(int no1,int no2,char ch) // definition
{
  	int res;
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
