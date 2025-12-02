#include<stdio.h>
void main() 
{
	double price= 500,t_price;
	char is_student='y';
	double discount=0;
	if(is_student == 'y')
	{
		if(price>500) 
		{
			discount=price*0.20;
			t_price=price-discount;
		} 
		else 
		{
			discount=price*0.10;
			t_price=price-discount;
		}
   }
	else
	{
		if(price > 600)
	     {
			discount=price*0.15;
			t_price=price-discount;
		} 
		else
		{
			t_price=price;
		}
  	}
	if(discount == 0) 
	{
		printf("Total price is %lf",t_price);
	} 
	else
	{
		printf("The final price with %lf discount is %lf",discount,t_price);

	}
}


