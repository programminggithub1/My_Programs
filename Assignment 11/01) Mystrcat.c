#include<stdio.h>
#include<string.h>
char* mystrcat(char*, char*);//declaration

void main()
{
char src[10];
printf("Enter a string::\n");
scanf("%s",src);
char dest[20];
printf("Enter a string::\n");
scanf("%s",dest);

char* p=  mystrcat(dest,src);//call

printf("%s",p);

}
 char* mystrcat(char* d,char* s)//defi
 {
 	int i=0,j=0;
 	while(d[i] !='\0')
 	{
 		i++;
 	}
 		while(s[j]!='\0')
 		{
 			d[i]=s[j];
 			i++;
 			j++;
		 }
	 d[i]='\0';
	 return d;
 }