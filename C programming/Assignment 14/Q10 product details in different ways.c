#include<stdio.h>

typedef struct product {
    int id;
    char name[20];
    int quantity;
    double price;
} product;

// Function declarations
product store1();         
void display1(product p); 
void store(product *p1);
void display(product p);
void storearr(product p[], int n);
void displayarr(product p[], int n);

void main() {
    product p1;
    
    p1 = store1();
    display1(p1);

    store(&p1);
    display(p1);

    product products[50]; 
    int n;
    printf("\n\nEnter the number of products: ");
    scanf("%d", &n);

    storearr(products, n);
    displayarr(products, n);
}

// Function definitions
product store1() {
    product temp;
    printf("\nEnter product details (Pass by Value):\n");
    printf("Enter ID: ");
    scanf("%d", &temp.id);
    printf("Enter name: ");
    scanf("%s", temp.name);
    printf("Enter quantity: ");
    scanf("%d", &temp.quantity);
    printf("Enter price: ");
    scanf("%lf", &temp.price);
    
    return temp;  
}

void display1(product p) {
    printf("\nProduct Details (Pass by Value):\n");
    printf("ID: %d\n", p.id);
    printf("Name: %s\n", p.name);
    printf("Quantity: %d\n", p.quantity);
    printf("Price: %.2lf\n", p.price);
}

void store(product *p1) {
    printf("\nEnter product details (Pass by Address):\n");
    printf("Enter ID: ");
    scanf("%d", &p1->id);
    printf("Enter name: ");
    scanf("%s", p1->name);
    printf("Enter quantity: ");
    scanf("%d", &p1->quantity);
    printf("Enter price: ");
    scanf("%lf", &p1->price);
}

void display(product p) {
    printf("\nProduct Details (Pass by Address):\n");
    printf("ID: %d\n", p.id);
    printf("Name: %s\n", p.name);
    printf("Quantity: %d\n", p.quantity);
    printf("Price: %.2lf\n", p.price);
}

void storearr(product p[], int n) {
    for(int i = 0; i < n; i++) {
        printf("\nEnter details of product %d:\n", i+1);
        printf("Enter ID: ");
        scanf("%d", &p[i].id);
        printf("Enter name: ");
        scanf("%s", p[i].name);
        printf("Enter quantity: ");
        scanf("%d", &p[i].quantity);
        printf("Enter price: ");
        scanf("%lf", &p[i].price);
    }
}

void displayarr(product p[], int n) {
    printf("\nAll Products Details:\n");
    for(int i = 0; i < n; i++) {
        printf("\nProduct %d:\n", i+1);
        printf("ID: %d\n", p[i].id);
        printf("Name: %s\n", p[i].name);
        printf("Quantity: %d\n", p[i].quantity);
        printf("Price: %.2lf\n", p[i].price);
    }
}
