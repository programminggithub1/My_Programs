#include<stdio.h>
#include<string.h>
void main()
{
char s1[30]="hello";
char s2[]="Geeks";
strncat(s1,s2,4);
printf("%s",s1);
}
