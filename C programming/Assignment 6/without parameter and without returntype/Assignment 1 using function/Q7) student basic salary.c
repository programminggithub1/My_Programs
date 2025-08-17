#include <stdio.h>
void student();//declaration
void main()
{
	student();//call
}//main end here
void student()//defi
{
    float basic_salary = 8000, da, ta, hra, total_salary;
    
    if (basic_salary <= 5000) {
        da = 0.10 * basic_salary;
        ta = 0.20 * basic_salary;
        hra = 0.25 * basic_salary;
    } else {
        da = 0.15 * basic_salary;
        ta = 0.25 * basic_salary;
        hra = 0.30 * basic_salary;
    }

    total_salary = basic_salary + da + ta + hra;
    printf("Total Salary: %f \n", total_salary);

    
}//defination end