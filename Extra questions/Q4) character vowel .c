#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a character::");
	scanf("%c",&ch);
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf(" %c is vowel",ch);
	}
	else{
		printf(" %c is consonant",ch);
	}
}
	else  if(ch>='0'&& ch<='9')
	{
		printf(" %c is digit",ch);
	}
	else
	{
		
		printf(" %c is special symbol",ch);
	}
	
}