#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	printf("Enter a string::\n");
	scanf("%s",str);
	int i=0, j=0;
	char ch;
	printf("Enter a character to remove::");
	scanf(" %c",&ch);
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		{
			for (j = i; str[j] != '\0'; j++) {
                str[j] = str[j + 1];
			}
			
		}
		i++;
	}
	printf("%s",str);
}