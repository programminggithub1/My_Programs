#include <stdio.h>

// structure definition
struct Admin {
    int id;
    char name[20];
    double salary;
    double allowance;
};

void main() {
    struct Admin a1;   

    
    printf("Enter Admin ID: ");
    scanf("%d", &a1.id);

    printf("Enter Admin Name: ");
    scanf("%s", a1.name);

    printf("Enter Admin Salary: ");
    scanf("%lf", &a1.salary);

    printf("Enter Allowance: ");
    scanf("%lf", &a1.allowance);

   
    printf("\n--- Admin Details ---\n");
    printf("ID        : %d\n", a1.id);
    printf("Name      : %s\n", a1.name);
    printf("Salary    : %.lf\n", a1.salary);
    printf("Allowance : %.lf\n", a1.allowance);

    
}
