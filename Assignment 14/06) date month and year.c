#include <stdio.h>

// structure definition
struct Date {
    int date;
    int month;
    int year;
};

int main() {
    struct Date d1;   
   
    printf("Enter date (dd): ");
    scanf("%d", &d1.date);

    printf("Enter month (mm): ");
    scanf("%d", &d1.month);

    printf("Enter year (yyyy): ");
    scanf("%d", &d1.year);
	printf("\n--- Date ---\n");
    printf("%d-%d-%d\n", d1.date, d1.month, d1.year);

    return 0;
}
