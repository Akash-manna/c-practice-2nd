//Q.35>Write a program to transpose a matrix.
#include<stdio.h>
main()
{
	int i,j,r,c;
	printf("Enter The Number of Rows of the Matrix:");
	scanf("%d",&r);
	printf("Enter the Number of Columns of the Matrix:");
	scanf("%d",&c);
	int a[r][c],b[r][c];
	printf("Enter the Matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("A[%d][%d] is ",i+1,j+1);
			scanf("%d",&a[i][j]);
			b[j][i]=a[i][j];
		}
	}
	printf("Main Matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
	printf("Transpose of The Matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d\t",b[i][j]);
		printf("\n");
	}
}