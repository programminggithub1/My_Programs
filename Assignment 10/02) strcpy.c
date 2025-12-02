#include<stdio.h>
#include<string.h>
void main()
{
char str[]="hello";
char dest[20];
strcpy(dest,str);
printf("copy of str is::%s",dest);
}
