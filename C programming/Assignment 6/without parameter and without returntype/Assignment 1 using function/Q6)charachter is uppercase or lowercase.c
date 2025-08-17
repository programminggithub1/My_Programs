#include<stdio.h>
void uppercase();//declaration
void main()
{
	uppercase();//call
}
void uppercase()//defi
{
	char ch='A';
	if(ch>='A'&& ch<= 'Z')
	printf("%c is uppercse character",ch);
	else
	
		printf("%c is Lowercase character",ch);
	
}//defination end