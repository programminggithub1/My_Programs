#include <stdio.h>
void student(double);//declaration
void main()
{
	double basic_salary;
	printf("Enter an salary::\n");
	scanf("%lf",&basic_salary);
	student(basic_salary);//call
}//main end here
void student(double basic_salary)//defi
{
    double da, ta, hra, total_salary;
    
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
    printf("Total Salary: %lf \n", total_salary);

    
}//defination end