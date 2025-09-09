#include<stdio.h>
void getamount(double,char); // declaration

void main()
{
    double amount;
    char ch;

    printf("Enter amount::\n");
    scanf("%lf",&amount);

    printf("Do you want to withdraw amount (y/n):: ");
    scanf(" %c",&ch);

    getamount(amount,ch); // call
}//end main

// definition
void getamount(double amount,char ch)
{
    double amnt, total;

    printf("Enter amount::\n");
    scanf("%lf",&amnt);

    if(ch=='y' || ch=='Y')
    {
        total = amount - amnt;
        printf("Remaining balance = %lf\n",total);
    }
    else
    {
        total = amount + amnt;
        printf("Updated balance = %lf\n",total);
    }
}
