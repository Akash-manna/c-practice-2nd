//Q10>>Check whether a given number is Armstrong number or not
#include<stdio.h>
main()
{
	int n,r,s=0,m;
	printf("Enter the Number:");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		s=s+(r*r*r);
	}
	if(s==n)
		printf("The Number is Armstrong Number!");
	else
		printf("The Number is NOT Armstrong Number!");
}