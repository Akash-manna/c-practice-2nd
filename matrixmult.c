//Q.34>Write a program to read the two matrices of order a*b and b*c respectively and print the resultant matrix of the multiplication of these two matrix.
#include<stdio.h>
void input(int r1,int c1,int a[r1][c1]);
void display(int r1,int c1,int a[r1][c1]);
void mult(int r1,int c1,int r2,int c2,int a[r1][c1],int b[r2][c2],int c[r1][c2]);
main()
{
	int r1,c1,r2,c2;
	printf("Enter the Rows of the First matrix:");
	scanf("%d",&r1);
	printf("Enter the Columns of the First matrix:");
	scanf("%d",&c1);
	printf("Enter the Rows of the Second matrix:");
	scanf("%d",&r2);
	printf("Enter the Columns of the Second matrix:");
	scanf("%d",&c2);
	int a[r1][c1],b[r2][c2],c[r1][c2];
	if(r1==c2)
	{
		printf("Enter the First Matrix:\n");
		input(r1,c1,a);
		printf("Enter the Second Matrix:\n");
		input(r2,c2,b);
		printf("The First Matrix is:\n");
		display(r1,c1,a);
		printf("The Second matrix is:\n");
		display(r2,c2,b);
		mult(r1,c1,r2,c2,a,b,c);
		printf("The Resultant Matrix is:\n");
		display(r1,c2,c);
	}
	else
		printf("Multiplication Not Possible!");
}
void input(int r1,int c1,int a[r1][c1])
{
	int i,j;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("Array[%d][%d] is ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
}
void display(int r1,int c1,int a[r1][c1])
{
	int i,j;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("\t%d\t",a[i][j]);
		}
		printf("\n");
	}
}
void mult(int r1,int c1,int r2,int c2,int a[r1][c1],int b[r2][c2],int c[r1][c2])
{
	int i,j,k;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			c[i][j]=0;
			for(k=0;k<r2;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
}