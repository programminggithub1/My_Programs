#include <stdio.h>

// structure definition
struct Distance {
    int feet;
    int inch;
};

int main() {
    struct Distance d1;   

    printf("Enter distance (feet): ");
    scanf("%d", &d1.feet);

    printf("Enter distance (inch): ");
    scanf("%d", &d1.inch);

    if (d1.inch >= 12) {
        d1.feet += d1.inch / 12;
        d1.inch = d1.inch % 12;
    }

    printf("\n--- Distance ---\n");
    printf("%d feet %d inches\n", d1.feet, d1.inch);

    return 0;
}
