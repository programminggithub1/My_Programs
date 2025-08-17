#include<stdio.h>
void getFahrenheit(int);//declaration
void main()
 {
	int Celsius;
	printf("Enter Celsius\n");
	scanf("%d",&Celsius);
	 getFahrenheit(Celsius);//call

}//end main
void getFahrenheit(int Celsius)//defi
{
	double Fahrenheit = (Celsius * 9.0/5) + 32;
	printf("%d Celsius into covert Fahrenheit is :: %lf ",Celsius,Fahrenheit);
}//end defi
