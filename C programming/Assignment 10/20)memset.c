#include <stdio.h>
#include <string.h>

void main()
{
    char str[50] = "first bit solution";
    printf("\nBefore memset(): %s\n", str);
    memset(str + 5, '.', 4*sizeof(char));

    printf("After memset():  %s", str);

}