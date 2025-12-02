#include<stdio.h>
char uppercase();//declaration
void main()
{
	if(uppercase())//call
	printf("uppercse character");
	else
	printf("Lowercase character");
}
char uppercase()//defi
{
	char ch;
	printf("Enter a alphabets \n");
	scanf("%c",&ch);
	return ch>='A'&& ch<= 'Z';
	
}//defination end