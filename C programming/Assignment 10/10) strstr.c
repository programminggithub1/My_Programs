#include<stdio.h>
#include<string.h>
void main()
{
char s1[]="hello,firstbit";
char *pos=strstr(s1,"firstbit");
if(pos != NULL)
printf("found ");
else
printf(" not found");

}
