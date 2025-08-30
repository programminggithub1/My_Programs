#include <stdio.h>

void main() {
    char str[100];
    char temp;
    int i = 0, len = 0;

    printf("Enter a string: ");
    scanf("%s", str);

   
    while (str[len] != '\0') {
        len++;
    }

    if (len > 1) {  
        temp = str[0];
        str[0] = str[len - 1];
        str[len - 1] = temp;
    }

    printf("New string: %s\n", str);
}
