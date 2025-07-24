#include<stdio.h>
#include<conio.h>
void main()
 {
	int minutes = 67, hours,remaining_minutes ;

	hours = minutes / 60;
	remaining_minutes = minutes % 60;

	printf("%d minutes into covert hours is %d and remaining minutes is %d   ",minutes,hours,remaining_minutes);

}