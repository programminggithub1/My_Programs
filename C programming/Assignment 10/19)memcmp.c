#include <stdio.h>
#include <string.h>

void main() {
    char str[] = "apple,orange,banana,grape"; 
    const char s[] = ",";                   

    char *token;
    token = strtok(str, s);

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, s); 
    }
}