#include <stdio.h>

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int term = 1; 

    printf("Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", term);
        term = term * -2;  
    }

}
