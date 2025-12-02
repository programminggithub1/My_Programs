#include<stdio.h>
char uppercase(char);//declaration
void main()
{
	char ch;
	printf("Enter a alphabate::\n");
	scanf("%c",&ch);
	if(uppercase(ch))//call
	printf("%c is uppercse character",ch);
	else
	printf("%c is Lowercase character",ch);
}
char uppercase(char ch)//defi
{
	return ch>='A'&& ch<= 'Z';
	
}//defination end