#include <stdio.h>

void main() {
    int n, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int term = 1;  
    int diff = 1;  

    printf("Series: ");
    for(i = 1; i <= n; i++) {
        printf("%d ", term);
        term = term + diff;  
        diff++;             
    }

}
