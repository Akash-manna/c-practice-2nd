/*Write a C Program to convert a temperature reading in degree Farhenheit to degree Celsius*/
#include<stdio.h>
main()
{
	float f,c;
	printf("\nEnter temperature in Celsius");
	scanf("%f",&c);
	f=(9*c+160)/5;
	printf("Temperature in Farhenheit is %.2f",f);
}