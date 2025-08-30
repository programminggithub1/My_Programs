#include <stdio.h>

void main() {
    char str[100];
    int i = 0, len = 0, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[len] != '\0') {
        len++;
    }

    
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;   
            break;
        }
    }
    if (flag == 1)
        printf("The string is a Palindrome.\n");
    else
        printf("The string is NOT a Palindrome.\n");

    
}
