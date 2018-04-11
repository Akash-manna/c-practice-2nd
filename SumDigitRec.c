//Q.23>Write a program using recurssive method to find the sum of digits of a Number
#include<stdio.h>
int sumd(int n)
{
	int r,sum=0;
	if(n==0)
		return sum;
	else
	{
		r=n%10;
		sum=sum+r;
		return(sumd(n/10));
	}
}
main()
{
	int n,x;
	printf("Enter the value of the number:");
	scanf("%d",&n);
	x=sumd(n);
	printf("The sum of digits is %d",x);
}

/*INCOMPLETE!!!*/