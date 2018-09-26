//Q.30>Write a Program to search an element from a sorted list
#include<stdio.h>
void main()
{
	int n,i,key,j,found;
	printf("Enter the Number of Elements:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the Array Elements:\n");
	for(i=0;i<n;i++)
	{
		printf("A[%d] is ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter the Number you want to search for:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			found = 1;
			break;
		}
		else
		{
			found = 0;
		}
	}
	if(found==1)
	{
		printf("The Element is in the list in the position %d",i+1);
	}
	else
	{
		printf("The Element is not in the list");
	}
}