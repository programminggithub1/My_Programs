#include<stdio.h>
double student(double,char);//declaration
void main() 
{
	double price;
	printf("Enter Price");
	scanf("%lf",&price);
	char is_student;
	printf("Are you student ");
	scanf(" %c",&is_student);
	double  res;
	 res=student(price ,is_student);//call
	 printf("Total Price is %lf",res);
}//main end here
double student(double price,char is_student)//defi
{
	double t_price, discount=0;
	
	if(is_student == 'y')
	{
		if(price>500) 
		{
			discount=price*0.20;
			
		} 
		else 
		{
			discount=price*0.10;
			
		}
   }
	else
	{
		if(price > 600)
	     {
			discount=price*0.15;
			
		} 
		else
		{
			t_price=price;
		}
  	}
	t_price=price-discount;
	return t_price;
}//defination end

	

