/*Q.16.b> Write a Program to printthe following Pattern
						1
					   2 3
					  4 5 6
*/
#include<stdio.h>
main()
{
	int i,j,k,m=1,n;
	printf("Enter the number of Lines:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(k=1;k<=i;k++)
			printf("%d ",m++);
		printf("\n");
	}
}