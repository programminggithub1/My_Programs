#include<stdio.h>
#include<string.h>
void main()
{
char str[6];
printf("Enter a string:\n");
scanf("%s",str);
int i=0,count=0;
while(str[i]!='\0')
{
	if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
	{
		count++;
	}
 	i++;
 }
 printf("%d",count);
}
