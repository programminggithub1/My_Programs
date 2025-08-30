#include <stdio.h>
#include <string.h>

char* mystrrev(char* str);//declaration

void main() {
    char str[50];
    printf("Enter a string: ");
    scanf("%s", str);   

    printf("Original string: %s\n", str);

    char* p = mystrrev(str); //call
    printf("Reversed string: %s\n", p);
}

char* mystrrev(char* str)//defi
{
    int i = 0, j = strlen(str) - 1;
    char temp;

    while (i < j) 
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
    return str;
}
