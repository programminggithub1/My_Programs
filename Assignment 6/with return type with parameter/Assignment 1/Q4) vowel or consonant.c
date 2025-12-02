#include<stdio.h>
char vowel(char);//declartion
void main()
{
	char ch ;
	printf("Enter an alphabets::\n");
	scanf("%c",&ch);
	if(vowel(ch))//call
	{
		printf("It is an vowel");
		}
		else
		{
			printf("It is an consonant");
		}
	
}//main end here
   char vowel(char ch)//defi
   {
		return ch=='a'|| ch=='e'||ch=='i'|| ch=='o'|| ch=='u'||ch=='A'|| ch=='E'||ch=='I'|| ch=='O'|| ch=='U' ;
		
   }
//defination end 