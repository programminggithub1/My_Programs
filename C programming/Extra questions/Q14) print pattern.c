#include <stdio.h>

void main() {
    int rows = 3, cols = 5;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", (i + j) % 2);
        }
        printf("\n");
    }
}
