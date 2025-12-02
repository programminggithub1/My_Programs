#include<stdio.h>
struct student
{
	int rollno;
	char name[10];
	int marks;
};
void main()
{
	struct student s1,s2;
	printf("Enter 2nd stdent details are::\n");
	printf("Enter roll no::\n");
	scanf("%d",&s2.rollno);
	printf("Enter name::\n");
	scanf("%s",&s2.name);
	printf("Enter marks::\n");
	scanf("%d",&s2.marks);
	s1.rollno=32;
	strcpy(s1.name,"ABC");
	s1.marks=82;
	printf("rollno=%d\n",s1.rollno);
	printf("name=%s\n",s1.name);
	printf("marks=%d\n",s1.marks);
	
	printf("\nrollno=%d\n",s2.rollno);
	
	printf("name=%s\n",s2.name);
	
	printf("marks=%d\n",s2.marks);
	
	
}