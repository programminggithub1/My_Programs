#include <stdio.h>

void  main() {
    int rows = 4, cols = 4;
    int num = 1;        
    char ch = 'A';     

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i % 2 != 0) {   
                printf("%d ", num);
                num++;
            } else {            
                printf("%c ", ch);
                ch++;
            }
        }
        printf("\n");
    }

}
