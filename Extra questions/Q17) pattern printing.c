#include <stdio.h>

void main() {
    int rows = 4;

    for (int i = 1; i <= rows; i++) {
        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }
        for (int j = 2; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}
