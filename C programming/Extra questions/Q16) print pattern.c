#include <stdio.h>

void main() {
    int rows = 4;
    for (int i = 1; i <= rows; i++) {
       
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

}
