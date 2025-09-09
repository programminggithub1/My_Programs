#include<stdio.h>
void main()
{
	int bill,unit;
	printf("Enter unit\n");
	scanf("%d",&unit);
	
	if(unit>=1 && unit <=50)
	{
		bill= unit*30;
		printf("bill is %d",bill);
	}
	else if(unit>50 && unit <=150)
	{
		bill= unit*40;
		printf("bill is %d",bill);
	}
	else
	{
		bill= unit*50;
		printf("bill is %d",bill);
	}
}