#include<stdio.h>
void main()
{
	char str[100];
	//char str[]="shweta 123";
	printf("Enter a strig::\n");
	//scanf("%s",str);
	gets(str);
	int vowels=0	,consonent=0,digit=0,space=0;
	for(int i=0;str[i]!='\0';i++)
	{
		
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U' )
		{
			
			vowels++;
		}
			
		else if(( str[i] >= 'A' && str[i] <='Z'||str[i] >= 'a' && str[i] <='z'))
		{
			
			consonent++;
		}
	
		else if(str[i]>='0'&& str[i]<='9')
		{
			
			digit++;
		
		}
		else if( str[i] ==' ' )
		{
			
			space++;
		}
	}
	printf("vowels=%d",vowels);
	printf("consonent=%d",consonent);
	printf("digit=%d",digit);
	printf("space=%d",space);
}