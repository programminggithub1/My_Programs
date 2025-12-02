#include<stdio.h>
#include<string.h>
void main()
{
char s1[]="Good";
char s2[]="Morning";
int res=strcmp(s1,s2);
if(res==0)
printf("s1 and s2 are same");
else if(res<0)
printf("s1 is smaller");
else
printf("s1 is greater");

}
