#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, D, x1, x2, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    D = (b * b) - (4 * a * c);

    if (D > 0) {
     
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        printf("Roots are real and different: %.2f and %.2f\n", x1, x2);
    }
    else {
        if (D == 0) {
            
            x1 = x2 = -b / (2 * a);
            printf("Roots are real and equal: %.2f and %.2f\n", x1, x2);
        }
        else {
            
            realPart = -b / (2 * a);
            imagPart = sqrt(-D) / (2 * a);
            printf("Roots are complex: %.2f + %.2fi and %.2f - %.2fi\n",
                   realPart, imagPart, realPart, imagPart);
        }
    }

    return 0;
}
