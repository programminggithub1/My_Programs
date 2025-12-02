#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

void store(Complex *c);   
void display(Complex c);  
void main() {
    Complex c1;

    store(&c1); 
    display(c1); 
}

void store(Complex *c) {
    printf("Enter real part: ");
    scanf("%f", &c->real);
    printf("Enter imaginary part: ");
    scanf("%f", &c->imag);
}

void display(Complex c) {
    printf("Complex Number = %.2f + %.2fi\n", c.real, c.imag);
}
