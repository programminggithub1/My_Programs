#include<stdio.h>
void vowel();//declartion
void main()
{
	vowel();//call
}//main end here
   void vowel()//defi
   {
   		char ch = 'A';
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