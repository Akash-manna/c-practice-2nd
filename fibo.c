//Q13>Write a Program to Print Fibonacci Series
#include<stdio.h>
void main()
{
	int n,a,b,c,i;
	printf("Enter the Number of time:");
	scanf("%d",&n);
	a=-1;
	b=1;
	printf("Fibonacci Series for the given series up to %d times is:\n",n);
	for(i=0;i<n;i++)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
}