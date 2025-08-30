#include <stdio.h>
#include <string.h> 
char* mystrupr(char*);//declaration
void main() {
    char str[10];
    //char str[]= "Hello World!";
    printf("Enter a string::\n");
    scanf("%s",str);
    printf("Original string: %s\n", str);
    char* p=mystrupr(str); //call
    printf("Upprecase string: %s\n", p);
}
char* mystrupr(char* str)//defi
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')  
        {
            str[i] = str[i] - 32;  
        }
        i++;
    }
    return str;
}