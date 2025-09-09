#include <stdio.h>

void main() {
    int base, exponent;
    long long result = 1;  

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    for (int i = 1; i <= exponent; i++) {
        result = result * base;
    }

    printf("%d^%d = %lld\n", base, exponent, result);

}
