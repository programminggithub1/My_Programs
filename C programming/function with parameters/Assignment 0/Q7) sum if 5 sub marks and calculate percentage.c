#include<stdio.h>
void getper(int,int,int,int,int);//declaration
void main()
 {
	int sub1, sub2 , sub3 , sub4 , sub5;
	printf("Enter 5 subject marks:: ");
	scanf("%d %d %d %d %d",&sub1, &sub2 , &sub3 , &sub4 , &sub5);
	
	 getper(sub1,sub2,sub3,sub4,sub5);//call
}//end main
void getper(int sub1, int sub2 ,int sub3 ,int sub4 ,int sub5)//defi
{
	int total = sub1+sub2+sub3+sub4+sub5;
	printf("Student Total of 5 subject marks is :: %d \n  ",total);

	double per= total/5.0;
	printf("Student Percentage is :: %lf ",per);
}//end defi