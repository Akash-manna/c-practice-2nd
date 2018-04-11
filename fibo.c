//Q13>Write a Program to Print Fibonacci Series
#include<stdio.h>
main()
{
	int n,a,b,c,i;
	printf("\nEnter the Number of time:");
	scanf("%d",&n);
	a=-1;
	b=1;
	printf("Fibonacci Series for the given series is:\n");
	for(i=0;i<n;i++)
	{
		c=a+b;
		printf("\t%d\t",c);
		a=b;
		b=c;
	}
}