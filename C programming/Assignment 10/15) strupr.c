#include <stdio.h>
#include <string.h> 

void main() {
    char str[] = "hello world!";

    printf("Original string: %s\n", str);

    strupr(str); 

    printf("Uppercase string: %s\n", str);

}