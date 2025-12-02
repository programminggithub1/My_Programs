#include <stdio.h>

double student(); // declaration

int main() // main should return int
{
    double res;
    res = student(); // call
    printf("Total price is %.2lf\n", res);
    return 0;
}

// definition
double student()
{
    double price, t_price, discount = 0;
    char is_student;

    printf("Enter Price: ");
    scanf("%lf", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &is_student); // space before %c to skip newline

    if (is_student == 'y' || is_student == 'Y')
    {
        if (price > 500)
            discount = price * 0.20;
        else
            discount = price * 0.10;
    }
    else
    {
        if (price > 600)
            discount = price * 0.15;
        else
            discount = 0;
    }

    t_price = price - discount;
    return t_price; // return the total price
}
