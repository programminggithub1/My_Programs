#include <stdio.h>
#include <string.h>

void main() {
    char str1[] = "hello world";
    char str2[] = "hloewr"; 

    size_t length = strspn(str1, str2);

    printf("The initial segment of \"%s\" containing only characters from \"%s\" has a length of %zu.\n", str1, str2, length);

}