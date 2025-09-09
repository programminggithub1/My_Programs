#include <stdio.h>

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Series: ");
    for (int i = 1; i <= n; i++) {
        if (i > 3 && i % 3 == 1) {
            printf("%d ", -(i * i));  
        } else {
            printf("%d ", i * i);    
        }
    }

}
