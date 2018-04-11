//Q.26>Write a program using recurssive method to print the fibonacci series
#include<stdio.h>
int fibo(int x)
{
	if(x==0||x==1)
		return x;
	else
		return(fibo(x-1)+fibo(x-2));
}
main()
{
	int n,i;
	printf("Enter the Number of times till fibonacci series print:");
	scanf("%d",&n);
	printf("The fibonacci Series till %d times:\n",n);
	for(i=0;i<=n;i++)
		printf("\t%d",fibo(i));
}

