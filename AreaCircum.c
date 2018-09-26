//Q03>>Find the Area and Circumference of the Circle.
#include<stdio.h>
//This is a Macro, that is defining something before the actual program start.
//Here, We are defining the value of constant pi with the value 3.1415
#define pi 3.1415
void main()
{
	float a,c,r;
	printf("Enter the Radius of the Circle:");
	scanf("%f",&r);
//	a=3.1415*r*r;
//	c=2*3.1415*r;
	a=pi*r*r;
	c=2*pi*r;
	printf("The Area of the Circle is %.2f\n",a);
	printf("The Circumference of the Circle is %.2f",c);
}