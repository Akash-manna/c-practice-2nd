//Q.29>Write a program to sort n numbers of data in ascending order
#include<stdio.h>
main()
{
	int n,i,j,temp;
	printf("Enter the Number of Elements:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the Array Elements:\n");
	for(i=0;i<n;i++)
	{
		printf("A[%d] is ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Array Before Sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("After Sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}