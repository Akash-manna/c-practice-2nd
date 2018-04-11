/*Q.17> Write a Program to evaluate the sum of the following series-
		1+(3/2!)+(5/3!)+...+n
*/
#include<stdio.h>
main()
{
	int fact,n,i,sum=0,j;
	printf("The Equation is like-\n1+(3/2!)+(5/3!)+...+N \n");
	printf("Enter the Value of N:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=1;
		for(j=1;j<i;j++)
			fact=fact*j;
		sum=sum+(2*i-1)/fact;
	}
	printf("The Sum is %d",sum);
}