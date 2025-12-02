#include <stdio.h>
#include <string.h> 

void main() {
    char myString[] = "Hello";

    printf("Original String: %s\n", myString);

    strrev(myString);

    printf("Reversed String: %s\n", myString);

   
}