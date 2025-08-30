#include <stdio.h>
#include <string.h>

char* mystrncpy(char* s1, char* s2, size_t n);//declaration

void main()
{
    char str1[6];
    printf("Enter a string::\n");
	scanf("%s",str1);
    char str2[6];
    
    char* p = mystrncpy(str2, str1, 5);//call
    printf("copy string is::%s\n", p);
}

char* mystrncpy(char* s1,  char* s2, size_t n)//Defi
{
    int i = 0;
    
    while (i < n && s2[i] != '\0')   
    {
        s1[i] = s2[i];
        i++;
    }
    
    while (i < n) 
    {
        s1[i] = '\0';
        i++;
    }
    
    return s1;   
}
