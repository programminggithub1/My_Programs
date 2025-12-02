#include<stdio.h>
void getarea(int,int);//declaration
void main()
 {
	int Base , Height;
	printf("Enter Base");
	scanf("%d",&Base);
	printf("Enter Height");
	scanf("%d",&Height);
	getarea(Base,Height);//call

}//end main
void getarea(int b,int h)//defi
{
	double Area = 0.5 * b * h;
	printf("Base is = %d and Height is = %d Area of triangle is :: %lf ",b,h,Area);
}//end defi