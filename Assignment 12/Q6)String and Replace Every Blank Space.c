#include <stdio.h>
#include<string.h>
void main() {
    char str[100]="shewta shinde";
    int i = 0;  
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str[i] = '#';   
        }
        i++;
    }

    printf("Modified string: %s", str);
}
