#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char buffer[20] = "hello world";
    memmove(buffer, buffer + 6, 5); 
    buffer[5] = '\0'; 

    printf("Result after memmove: %s\n", buffer); 

    return EXIT_SUCCESS;
}