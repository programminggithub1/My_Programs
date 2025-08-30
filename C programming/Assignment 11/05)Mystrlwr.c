#include <stdio.h>
#include <string.h> 
char* mystrlwr(char*);//declaration
void main() {
    char str[10];
    //char str[]= "Hello World!";
    printf("Enter a string::\n");
    scanf("%s",str);
    printf("Original string: %s\n", str);
    char* p=mystrlwr(str); //call
    printf("Lowercase string: %s\n", p);
}
char* mystrlwr(char* str)//Defi
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')  
        {
            str[i] = str[i] + 32;  
        }
        i++;
    }
    return str;
}