//Q.18>Write a program in function method to reverse any given number.
#include<stdio.h>
void rev()
{
	int n,s=0,r;
	printf("Enter the Number:");
	scanf("%d",&n);
	printf("The Number is %d\n",n);
	while(n>0)
	{
		r=n%10;
		s=10*s+r;
		n=n/10;
	}
	printf("The reverse is %d",s);
}
void main()
{
	rev();
}