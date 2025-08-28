#include <stdio.h>
#include <string.h>

void main() {
    char str[] = "This is a test string.";
    char search_set[] = "h"; 
    char *result = strpbrk(str, search_set);

    if (result != NULL) {
        printf("The first vowel found is '%c' at position %ld.\n", *result, result - str);
    } else {
        printf("No vowel found.\n");
    }

}