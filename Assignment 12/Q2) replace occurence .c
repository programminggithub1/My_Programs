#include<stdio.h>
#include<string.h>
void main()
{
char str[6],ch;
printf("Enter a string:\n");
scanf("%s",str);
printf("Enter a character:\n");
scanf(" %c",&ch);
int i=0;
while(str[i]!='\0')
{
	if(str[i]==ch)
	{
		str[i]='$';
 	} 
 	i++;
 }
 printf("%s",str);
}