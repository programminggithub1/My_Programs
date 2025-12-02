#include <stdio.h>

int main() {
    int a, b, temp, hcf, lcm, num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    num1 = a;
    num2 = b;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;

    lcm = (num1 * num2) / hcf;

    
    printf("HCF = %d\n", hcf);
    printf("LCM = %d\n", lcm);

}
