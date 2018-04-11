//Q.28>Write a program to find the highest and lowest element from an Integer Array
#include<stdio.h>
main()
{
	int a[10],n,i,max,min;
	printf("Enter the Number of elements:");
	scanf("%d",&n);
	printf("Enter the Array Elements:\n");
	for(i=0;i<n;i++)
	{
		printf("A[%d] is:",i+1);
		scanf("%d",&a[i]);
	}
	printf("Display Array Elements:\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	max=min=a[0];
	for(i=1;i<n;i++)
	{
		if(max<a[i])
			max=a[i];
		if(min>a[i])
			min=a[i];
	}
	printf("max=%d and min=%d",max,min);
}