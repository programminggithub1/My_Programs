#include<stdio.h>
#include<string.h>
void main()
{
	char s[]="hello";
	char* res=strdup(s);
	printf("duplicate string:%s",res);
}