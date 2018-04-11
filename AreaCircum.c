//Q03>>Find the Area and Circumference of the Circle.
#include<stdio.h>
main()
{
	float a,c,r;
	printf("Enter the Radius of the Circle:");
	scanf("%f",&r);
	a=3.1415*r*r;
	c=2*3.1415*r;
	printf("The Area of the Circle is %.3f",a);
	printf("\nThe Circumference of the Circle is %.3f",c);
}