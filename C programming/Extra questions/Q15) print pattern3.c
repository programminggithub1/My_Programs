#include <stdio.h>

void main() {
    int rows = 4;

    for (int i = 1; i <= rows; i++) {
        int val = i % 2;   
        for (int j = 1; j <= i; j++) {
            printf("%d ", val);
            val = 1 - val; 
        }
        printf("\n");
    }

}
