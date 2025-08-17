#include<stdio.h>
void evenodd();//declaration
void main()
{
	evenodd();//call
}//main end here
void evenodd()//defi
{

	int No = 20;
	if( No%2==0)
	{
		printf("%d is Even number",No);
	}
	else
	{
		printf("%d is Odd number",No);
	}
}//defination