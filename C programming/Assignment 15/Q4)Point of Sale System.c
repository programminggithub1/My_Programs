#include <stdio.h>

typedef struct {
    char name[20];
    float price;
    int quantity;
} Product;

// Function declarations
void addProduct(Product *p);
void displayCart(Product cart[], int n);
float calculateTotal(Product cart[], int n);

void main() {
    Product cart[50];
    int n, i;
    float total;

    printf("Enter number of products to add in cart: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details for Product %d:\n", i+1);
        addProduct(&cart[i]);   // pass by address
    }

    printf("\n--- Shopping Cart ---\n");
    displayCart(cart, n);

    total = calculateTotal(cart, n);
    printf("\nTotal Cost = %.2f\n", total);
}

void addProduct(Product *p) {
    printf("Enter product name: ");
    scanf("%s", p->name);
    printf("Enter price: ");
    scanf("%f", &p->price);
    printf("Enter quantity: ");
    scanf("%d", &p->quantity);
}


void displayCart(Product cart[], int n) {
    printf("\n%-15s %-10s %-10s %-10s\n", "Product", "Price", "Qty", "Total");
    printf("---------------------------------------------\n");
    for(int i=0; i<n; i++) {
        printf("%-15s %-10.2f %-10d %-10.2f\n",
            cart[i].name,
            cart[i].price,
            cart[i].quantity,
            cart[i].price * cart[i].quantity);
    }
}

float calculateTotal(Product cart[], int n) {
    float total = 0;
    for(int i=0; i<n; i++) {
        total += cart[i].price * cart[i].quantity;
    }
    return total;
}
