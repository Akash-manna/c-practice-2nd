//Q.30>Write a Program to search an element from a sorted list
#include<stdio.h>
main()
{
	int n,i,key;
	printf("Enter the Number of Elements:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the Array Elements:\n");
	for(i=0;i<n;i++)
	{
		printf("A[%d] is ",(i+1));
		scanf("%d",a[i]);
	}
	printf("Enter the Number you want to search for:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			printf("Element is found!!!");
			break;
		}
		else
			printf("Element Not Found. Sorry!!!");
	}
	/*if(i==n)
		printf("Element could not be Found!");*/
}