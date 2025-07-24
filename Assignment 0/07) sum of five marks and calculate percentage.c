#include<stdio.h>
#include<conio.h>
void main()
 {
	int sub1 = 82, sub2 = 67, sub3 = 76, sub4 = 81, sub5 = 80, total ;
	float per;
	total = sub1+sub2+sub3+sub4+sub5;
	printf("Student Total of 5 subject marks is :: %d \n  ",total);

	per= total/5.0;
	printf("Student Percentage is :: %f   ",per);

}