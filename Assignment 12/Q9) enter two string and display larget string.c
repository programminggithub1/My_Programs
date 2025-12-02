#include<string.h>
void main()
{
	char str1[]="hello";
	char str2[]="hii";
	int len1=0,len2=0;
	for(int i=0;str1[i]!='\0';i++)
	{
		len1++;
	}
	for(int i=0;str2[i]!='\0';i++)
	{
		len2++;
	}
	if(len1>len2)
	{
		printf("%s:: is grater",str1);	
	}else if(len2 > len1)
	{
		printf("%s:: is grater",str2);
	}
	
}