#include<stdio.h>
void getparameter(int , int);
void main() 
{
	int length , width ;
	printf("Enter lenght");
	scanf("%d",&length);
	printf("Enter lenght");
	scanf("%d",&width);
	getparameter(length , width);

}//end main
void getparameter(int l , int w)
{
	double parameter = 2 * (l + w);

	printf("Area of Rectangle %d and %d  is :: %lf ",l,w,parameter);
	
}
