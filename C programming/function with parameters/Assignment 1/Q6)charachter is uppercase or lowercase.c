#include<stdio.h>
void uppercase(char);//declaration
void main()
{
	char ch;
	printf("Enter a alphabets::\n");
	scanf("%c",&ch);
	uppercase(ch);//call
}
void uppercase(char ch)//defi
{
	if(ch>='A'&& ch<= 'Z')
	printf("%c is uppercse character",ch);
	else
	
		printf("%c is Lowercase character",ch);
	
}//defination end