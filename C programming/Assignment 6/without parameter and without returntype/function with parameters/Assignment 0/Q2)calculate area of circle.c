#include<stdio.h>
void getarea(float,int);//declaration
void main()
{
	int Radius ;
	float  PI=3.14 ;
	printf("Enter Radious");
	scanf("%d",&Radius);
	getarea(Radius,PI);//call
}//main end 
void getarea(float PI,int R)//defi
{
	float Area = PI * R * R;
	printf("Area of circle is %f ",Area);
}//end defi