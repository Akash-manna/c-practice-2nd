//Q.06>>Calculate the roots of the quadratic equation with proper checking of the form
//		ax^2+bx+c=0
#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,d,x1,x2;
	printf("The Equation is ax^2+bx+c=0\n");
	printf("Enter the value of a:");
	scanf("%f",&a);
	printf("Enter the value of b:");
	scanf("%f",&b);
	printf("Enter the value of c:");
	scanf("%f",&c);
	printf("Enter the value of x1:");
	scanf("%f",x1);
	printf("Enter the value of x2:");
	scanf("%f",&x2);
	d=sqrt(b*b-4*a*c);
	if(d>=0)
	{
		x1=((-b+d)/2*a);
		x2=((b-d)/2*a);
		printf("The value of real root area %f %f",x2,a);
	}
	else
		printf("No real root);
}