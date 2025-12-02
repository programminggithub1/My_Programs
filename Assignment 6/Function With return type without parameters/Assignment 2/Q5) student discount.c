#include<stdio.h>
double student();//declaration
void main() 
{
	double  res;
	 res=student();//call
	 printf("Total Price is %lf",res);
}//main end here
double student()//defi
{
	double price,t_price, discount=0;
	printf("Enter Price");
	scanf("%lf",&price);
	char is_student;
	printf("Are you student ");
	scanf(" %c",&is_student);
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

	

