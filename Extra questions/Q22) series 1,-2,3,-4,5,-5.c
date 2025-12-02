#include <stdio.h>

void main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Series: ");
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)  
            printf("-%d ", i);
        else      
            printf("%d ", i);
    }

}
