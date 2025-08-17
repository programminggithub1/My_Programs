#include<stdio.h>
void getnum(int);//declaration
void main()
 {
	int no;
	printf("Enter a number");
	scanf("%d",&no);
   getnum(no);
}//main end
void getnum(int no)//defi
{
	int square = no * no;
	int cube = no * no* no;
	printf("Sqaure of %d is :: %d \n",no, square);
	printf("Cube of %d is :: %d \n",no, cube);	
}//end defi