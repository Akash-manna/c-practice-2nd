//Q11> Write a Program to find G.C.D of two given numbers
#include<stdio.h>
main()
{
	int m,n;
	printf("Enter the First Number:");
	scanf("%d",&m);
	printf("Enter the Second Number:");
	scanf("%d",&n);
	while(m!=n)
	{
		if(m>n)
			m=m-n;
		else
			n=n-m;
	}
	printf("G.C.D is %d",m);
}