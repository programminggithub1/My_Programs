#include <stdio.h>
#include <string.h>

int mystrstr(char str[], char substr[]);

void main()
{
    char s1[50], s2[50];

    printf("Enter main string: ");
    scanf("%s", s1);

    printf("Enter substring to search: ");
    scanf("%s", s2);

    if (mystrstr(s1, s2))
        printf("Found\n");
    else
        printf("Not found\n");
}

int mystrstr(char str[], char substr[])
{
    int i, j;
    int len1 = strlen(str);
    int len2 = strlen(substr);

    for (i = 0; i <= len1 - len2; i++) {
        for (j = 0; j < len2; j++) {
            if (str[i + j] != substr[j])
                break;
        }
        if (j == len2)  
            return 1;
    }
    return 0;   
}
