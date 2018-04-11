//Q.20>Write a Program using function method to calculate M^n where M and n are given by user.
#include<stdio.h>
int power(int,int);
main()
{
	int m,n,a;
	printf("We are going to find the value of M^n.\n");
	printf("Enter the value of M:");
	scanf("%d",&m);
	printf("Enter the value of n:");
	scanf("%d",&n);
	power(m,n);
	printf("%d^%d=%d",m,n,a);
}
int power(int m,int n)
{
	int i,a=m;
	for(i=1;i<=n;i++)
		a=a*a;
	return a;
}