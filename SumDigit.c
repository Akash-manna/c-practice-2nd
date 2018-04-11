//Q09>>Make the sum of given digit
#include<stdio.h>
main()
{
	int r,n,sum=0;
	printf("Enter the value of Digit:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		n=n/10;
		sum=sum+r;
	}
	printf("The Sum of the Digit is %d",sum);
}