#include <stdio.h>

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Series: ");
    for (int i = 1; i <= n; i++) {
        int term = 2 * i - 1;   
        if (i % 2 == 0)        
            term = -term;
        printf("%d ", term);
    }

}
