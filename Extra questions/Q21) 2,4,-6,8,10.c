#include <stdio.h>

void main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int term = 2 * i;          
        if (i % 3 == 0) term = -term; 
        printf("%d ", term);
    }

}
