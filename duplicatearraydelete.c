//Q.31>write a program to delete a duplicate element in an array from the list of elements.
#include<stdio.h>
main()
{
	int n,p,r,i,j;
	printf("Enter the Number of Elements:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the Array Elements:\n");
	for(i=0;i<n;i++)
	{
		printf("A[%d] is ",(i+1));
		scanf("%d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				p=j;
				n--;
				break;
			}
		}
		for(r=p;r<n;r++)
			a[r]=a[r+1];
	}
	for(i=0;i<n;i++)
		("%d",a[i]);
}