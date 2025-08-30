#include<stdio.h>
#include<string.h>

int mystrlen(char*);//declaration
void main()
{
char str[5];
printf("Enter a string::\n");
scanf("%s",str);
int res =mystrlen(str);//call
printf("%d",res);
}
int mystrlen(char* str)//Defi
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}
