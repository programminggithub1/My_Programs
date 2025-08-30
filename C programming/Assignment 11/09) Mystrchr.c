#include <stdio.h>
#include <string.h>

int mystrchr(char* s1, char s2);

void main()
{
    char s1[50];
    char s2;

    printf("Enter a string: ");
    scanf("%s", s1);

    printf("Enter a character: ");
    scanf(" %c", &s2);   
    if (mystrchr(s1, s2))
        printf("Character found\n");
    else
        printf("Character not found\n");
}

int mystrchr(char* s1, char s2)
{
    int i = 0;
    while (s1[i] != '\0')   
    {
        if (s1[i] == s2)
            return 1;      
        i++;
    }
    return 0;               
}
