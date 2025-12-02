#include<stdio.h>
int number(int,int,int);//declaration
void main()
{
	int a,b, c;
	printf("Enter 3 numbers::\n");
	scanf("%d %d %d",&a,&b,&c);
	int res;
	 res =number(a,b,c);//call
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
int number(int a,int b,int c)//defi
{
	
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