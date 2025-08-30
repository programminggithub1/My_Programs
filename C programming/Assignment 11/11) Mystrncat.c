#include<stdio.h>
#include<string.h>
char* mystrncat(char*,char*,int*);
void main()
{
char s1[10];
printf("Enter a first string::");
scanf("%s",s1);
char s2[10];
printf("Enter a second string::");
scanf("%s",s2);
int n;
printf("Enter a number to concatenate string::");
scanf("%d",&n);
char* p=mystrncat(s1,s2,n);
printf("After concatenation: %s\n", p);

}
char* mystrncat(char* s1,char* s2,int* n)
{
	int i = 0, j = 0;

    
    while (s1[i] != '\0') {
        i++;
    }
    while (j < n && s2[j] != '\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';

    return s1; 
}