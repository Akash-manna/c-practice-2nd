//Q.02>>Write a C Program to implement Swapping or Exchanging 2 numbers
#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the value of A:");
	scanf("%d",&a);
	printf("Enter the value of B:");
	scanf("%d",&b);
	printf("Before Swapping A=%d and B=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter Swappin A=%d and B=%d",a,b);
}