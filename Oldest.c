/*Q.04>>If The ages of Mr.X,Mr.Y and Mr.Z are taken input from User-End,Write a C Program to determine who is the oldest*/
#include<stdio.h>
main()
{
	int x,y,z;
	printf("Enter the age of Mr.X:");
	scanf("%d",&x);
	printf("Enter the age of Mr.Y:");
	scanf("%d",&y);
	printf("Enter the age of Mr.Z:");
	scanf("%d",&z);
	if((x>y)&&(x>z))
		printf("Mr.X is oldest");
	else if((y>x)&&(y>z))
		printf("Mr.Y is oldest");
	else if((z>x)&&(z>y))
		printf("Mr.Z is oldest");
	else
		printf("All three are of Same age");
}