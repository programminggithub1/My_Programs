#include<stdio.h>
int number();//declaration
void main()
{
	int res;
	 res =number();//call
	 if(res==1)
	 {
	 	printf("a is greater");
	 }
	 else if( res==2)
	 {
	 	printf("b is greater");
	 }
	 else
	 {
	 	printf("c is greater");
	 }
}//main end
int number()//defi
{
	int a= 45,b=21, c=66;
	if(a>b && a> c)
	{
	 	return 1;
		
    }
		else if(b>a && b>c)
		{
			return 2;
			
		}
	else
	{
		return 3;
		
	}
}//defination end