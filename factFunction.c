/*Q.19>Write a C Program using function methyod to find the factorial of a number*/
#include<stdio.h>
int fact()
{
	int i,n,r=1;
	printf("Enter the Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		r=r*i;
	printf("%d! is %d",n,r);
}
main()
{
	//Calling the fact() method from the main() method.
	fact();
}