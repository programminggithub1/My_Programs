#include<stdio.h>
char vowel();//declartion
void main()
{
	char ch;
	ch=vowel();//call
	if( ch=='y')
	printf("It is an vowel");
	else
	printf("It is an character");
	
}//main end here
 char vowel()//defi
   {
   		char ch;
   		printf("Enter alphabates\n");
		scanf("%c",&ch);
		if(ch=='a'|| ch=='e'||ch=='i'|| ch=='o'|| ch=='u'||ch=='A'|| ch=='E'||ch=='I'|| ch=='O'|| ch=='U' )
		{
			return 'y';
		}
		else
		{
			return 'N';
		}
   }
//defination end 