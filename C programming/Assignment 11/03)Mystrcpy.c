#include<stdio.h>
#include<string.h>
char* mystrcpy(char*,char*);//declaration
void main()
{
char str1[6];
printf("Enter a string::\n");
scanf("%s",str1);
char str2[6];
char* p =mystrcpy(str2,str1);//call
printf("%s\n",str2);
printf("copy string is:: %s",p);
}
char* mystrcpy(char* s2,char* s1)//Defi
{
	int i=0;
	while(s1[i] !='0')
	{
		s2[i]=s1[i];
		i++;
	}
	s2[i]=s1[i];
	return s2;
}