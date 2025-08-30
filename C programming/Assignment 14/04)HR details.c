#include <stdio.h>

// structure definition
struct HR {
    int id;
    char name[20];
    float salary;
    float commission;
};

void main() {
    struct HR h1;   

   
    printf("Enter HR ID: ");
    scanf("%d", &h1.id);

    printf("Enter HR Name: ");
    scanf("%s", h1.name);

    printf("Enter HR Salary: ");
    scanf("%lf", &h1.salary);

    printf("Enter HR Commission: ");
    scanf("%lf", &h1.commission);

    
    printf("\n--- HR Details ---\n");
    printf("ID         : %d\n", h1.id);
    printf("Name       : %s\n", h1.name);
    printf("Salary     : %.lf\n", h1.salary);
    printf("Commission : %.lf\n", h1.commission);

    
}
