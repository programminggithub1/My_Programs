#include<stdio.h>
struct employee
{
	int id;
	char name[10];
	double salary;
};
void main()
{
	struct employee e1,e2;
	printf("Enter 1stnd employee details are::\n");
	printf("Enter id::\n");
	scanf("%d",&e1.id);
	printf("Enter name::\n");
	scanf("%s",&e1.name);
	printf("Enter marks::\n");
	scanf("%lf",&e1.salary);
	
	e2.id=32;
	strcpy(e2.name,"ABC");
	e2.salary=82.08888;
	printf("id=%d\n",e1.id);
	printf("name=%s\n",e1.name);
	printf("salary=%lf\n",e1.salary);
	
	printf("\id=%d\n",e2.id);
	
	printf("name=%s\n",e2.name);
	
	printf("salary=%lf\n",e2.salary);
	
	
}