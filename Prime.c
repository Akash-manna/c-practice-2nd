//Q.08>>Check whether a given number is prime or not
#include<stdio.h>
void main()
{
	int n,i=2,flag=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			flag=1;
			//break is used to terminate(end) a loop when we want.
			break;
		}
		i++;
	}
	if(flag==1)
		printf("The Number %d is not prime!",n);
	else
		printf("The Number %d is Prime!",n);
}
