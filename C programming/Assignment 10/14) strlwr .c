#include <stdio.h>
#include <string.h> 

void main() {
    char str[] = "Hello World!";
    printf("Original string: %s\n", str);
    strlwr(str); 
    printf("Lowercase string: %s\n", str);
    
}