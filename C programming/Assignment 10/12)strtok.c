#include<stdio.h>
#include<string.h>
void main()
{
char s1[]="Good,first,bit";
char *res=strtok(s1,", ");
if(res != NULL)
{
	printf("%s\n",res);
	res=strtok(NULL,", ");
}

}
