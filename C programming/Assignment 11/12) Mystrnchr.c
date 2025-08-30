#include <stdio.h>
#include <string.h>

int mystrnchr(char* s1, char s2, int n);

void main()
{
    char s1[50];
    char s2;
    int n;

    printf("Enter a string: ");
    scanf("%s", s1);

    printf("Enter a character: ");
    scanf(" %c", &s2);  

    printf("Enter number of characters to search: ");
    scanf("%d", &n);  

    if (mystrnchr(s1, s2, n))
        printf("Character found\n");
    else
        printf("Character not found\n");
}

int mystrnchr(char* s1, char s2, int n)
{
    int i = 0;
    while (i < n && s1[i] != '\0')   
    {
        if (s1[i] == s2)
            return 1;   
        i++;
    }
    return 0;  
}
