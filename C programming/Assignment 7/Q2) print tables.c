#include<stdio.h>

void table(int*, int*); // declaration

void main()
{
    int no1, no2;
    printf("Enter 1st number::\n");
    scanf("%d", &no1);
    printf("Enter 2nd number::\n");
    scanf("%d", &no2);
    table(&no1, &no2);//call
}//end main

// definition
void table(int* no1, int* no2)
{
    int no;
    for (int i = 1; i <= *no2; i++)   
    {
        no = (*no1) * i;
        printf("%d x %d = %d\n", *no1, i, no);
    }
}//end defi
