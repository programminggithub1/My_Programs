#include <stdio.h>
#include <string.h>

struct Product {
    int id;
    char name[50];
    float price;
    float discountedPrice;
};

void main() {
    int n;
    printf("Enter number of products: ");
    scanf("%d", &n);

    struct Product products[n];
    float total = 0;

    for (int i = 0; i < n; i++) {
        printf("\nEnter details of product %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &products[i].id);

        printf("Name: ");
        scanf("%s", products[i].name);

        printf("Price: ");
        scanf("%f", &products[i].price);

        if (products[i].price > 500) {
            products[i].discountedPrice = products[i].price - (products[i].price * 0.20);
        } else {
            products[i].discountedPrice = products[i].price - (products[i].price * 0.05);
        }

        total += products[i].discountedPrice;
    }

    float totalWithGST = total + (total * 0.18);

    printf("\n--- Product Details ---\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Original Price: %.2f, After Discount: %.2f\n",
               products[i].id, products[i].name,
               products[i].price, products[i].discountedPrice);
    }

    printf("\nTotal Price after discount = %.2f", total);
    printf("\nTotal Price after adding 18%% GST = %.2f\n", totalWithGST);

}
