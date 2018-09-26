//Q.27>Write a program using recurssive method to find the G.C.D of given Numbers
#include<stdio.h>
int gcd(int m,int n)
{
	if(m%n==0)
		return n;
	else
		return(gcd(n,m%n));
}
void main()
{
	int m,n,x;
	printf("Enter the value of M:");
	scanf("%d",&m);
	printf("Enter the value of N:");
	scanf("%d",&n);
	x=gcd(m,n);
	printf("G.C.D of %d and %d is %d",m,n,x);
}