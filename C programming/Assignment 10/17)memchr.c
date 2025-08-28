#include <stdio.h>
#include <string.h>

void main() {
    char data[] = "Hello, World!";
    char target_char = 'o';
    size_t search_length = strlen(data); 

    void *result = memchr(data, target_char, search_length);

    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n", target_char, (long)((char *)result - data));
    } else {
        printf("Character '%c' not found.\n", target_char);
    }

   
}