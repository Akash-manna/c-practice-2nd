//Q.24>Write a program using recurssive method to reverse any given number
#include<stdio.h>
int sum=0;
int reverse(int n)
{
	int rev;
	if(n==0)
		return sum;
	else
	{
		rev=n%10;
		sum=10*sum+rev;
		n=n/10;
		return(reverse(n));
	}
}
main()
{
	int n,x;
	printf("Enter the Number:");
	scanf("%d",&n);
	x=reverse(n);
	printf("The Reverse of %d is %d",n,x);
}

/*COMPLETED!!!*/