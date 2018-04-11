//Q.25>Write a program using recurssive method to find the factorial of a given no.
#include<stdio.h>
long fact(int n)
{
	if(n==0)
		return 1;
	else
		return(n*fact(n-1));
}
main()
{
	int n;
	printf("Enter the Number:");
	scanf("%d",&n);
	printf("The Factorial of %d is %ld",n,fact(n));
}

