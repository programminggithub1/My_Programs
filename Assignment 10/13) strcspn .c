#include <stdio.h>
#include <string.h>

void main() {
    char str[] = "This is a test string.";
    char search_set[] = "aeiou"; 

    size_t length = strcspn(str, search_set); 

    printf("The first vowel in \"%s\" is at position %zu.\n", str, length);

    
}