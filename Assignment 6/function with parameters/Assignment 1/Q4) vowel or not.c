#include<stdio.h>
void vowel(char);//declartion
void main()
{
	char ch;
	printf("Enter a charachter::\n");
	scanf("%c",&ch);
	vowel(ch);//call
}//main end here
   void vowel(char ch)//defi
   {
   		
		if(ch=='a'|| ch=='e'||ch=='i'|| ch=='o'|| ch=='u'||ch=='A'|| ch=='E'||ch=='I'|| ch=='O'|| ch=='U' )
		{
			printf("It is an vowel");
		}
		else
		{
			printf("It is an consonant");
		}
   }
//defination end 