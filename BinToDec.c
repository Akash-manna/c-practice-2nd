/*Q.21>Write a C Program using function method to convert a binary numerical into equivalent decimal number*/
#include<stdio.h>
#include<math.h>
int convert(long n)
{
	int i=0,s=0,r;
	while(n!=0)
	{
		r=n%10;
		s=s+r*pow(2,i);
		i++;
		n=n/10;
	}
	return s;
}
void main()
{
	long n;
	int d;
	printf("Enter the number in binary format:");
	scanf("%ld",&n);
	d=convert(n);
	printf("\nEquivalent decimal of %ld is %d",n,d);
}


/*COMPLETE!!!*/