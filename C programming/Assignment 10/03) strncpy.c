#include<stdio.h>
#include<string.h>
void main()
{
char str[]="hello";
char dest[20];
strncpy(dest,str,4);
printf("copy of str is::%s",dest);
}
