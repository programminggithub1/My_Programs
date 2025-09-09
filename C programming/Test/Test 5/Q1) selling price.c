#include<stdio.h>
void sellingprice(double , double );//declar
void main()
{
	double costprice;
	double discount=15;
	printf("Enter cost price");
	scanf("%lf",&costprice);
	sellingprice( costprice,  discount);//call
}
 void sellingprice(double x, double y)
 {
 	double discount=(x*y)/100;
 	double sellingprice=x-discount;
 	printf("%lf",sellingprice);
 }