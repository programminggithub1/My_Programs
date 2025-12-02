#include <stdio.h>

// structure definition
struct SalesManager {
    int id;
    char name[20];
    double salary;
    double incentive;
    int target;
};

void main() {
    struct SalesManager sm1;   

    printf("Enter Sales Manager ID: ");
    scanf("%d", &sm1.id);

    printf("Enter Sales Manager Name: ");
    scanf("%s", sm1.name);

    printf("Enter Sales Manager Salary: ");
    scanf("%lf", &sm1.salary);

    printf("Enter Sales Manager Incentive: ");
    scanf("%lf", &sm1.incentive);

    printf("Enter Sales Manager Target: ");
    scanf("%d", &sm1.target);

    
    printf("\n--- Sales Manager Details ---\n");
    printf("ID        : %d\n", sm1.id);
    printf("Name      : %s\n", sm1.name);
    printf("Salary    : %.lf\n", sm1.salary);
    printf("Incentive : %.lf\n", sm1.incentive);
    printf("Target    : %d\n", sm1.target);

   
}
