#include<stdio.h>
#include<string.h>
void main()
{
char s1[]="Good,Morning";
char *res=strrchr(s1,'M');
if(res != NULL)
printf("character found at : %ld index",res-s1);
else
printf("character not found");

}
