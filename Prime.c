//Q.08>>Check whether a given number is prime or not
#include<stdio.h>
main()
{
	int n,i=2,flag=0;
	printf("Enter the value of n");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
		i++;
	}
	if(flag==1)
		printf("Number is not prime!");
	else
		printf("Number is Prime!");
}