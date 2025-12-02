#include<stdio.h>
void gethours(int);
void main()
 {
	int minutes  ;
	printf("Enter minutes");
	scanf("%d",&minutes);
	 gethours(minutes);
	
}
void gethours(int minutes)
{
	int  hours,remaining_minutes;
	hours = minutes / 60;
	remaining_minutes = minutes % 60;

	printf("%d minutes into covert hours is %d and remaining minutes is %d   ",minutes,hours,remaining_minutes);

}