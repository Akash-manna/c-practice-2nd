//Q.32>Write a program to read two matrices a*b and c*d respectively and display their addition matrix
#include<stdio.h>
void input(int a,int b,int A[a][b]);
void display(int a,int b,int A[a][b]);
void add(int a,int b,int c,int d,int A[a][b],int B[c][d],int C[a][d]);
main()
{
	int a,b,c,d;
	printf("Enter the number of Rows of Matrix A:");
	scanf("%d",&a);
	printf("Enter the number of Columns of Matrix A:");
	scanf("%d",&b);
	printf("Enter the number of Rows of Matrix B:");
	scanf("%d",&c);
	printf("Enter the number of Columns of Matrix B:");
	scanf("%d",&d);
	int A[a][b],B[c][d],C[a][d];
	if(a==c&&b==d)
	{
		printf("Enter the first matrix:\n");
		input(a,b,A);
		printf("Enter the Second matrix:\n");
		input(c,d,B);
		printf("The First Matrix is:\n");
		display(a,b,A);
		printf("The Second Matrix is:\n");
		display(c,d,B);
		add(a,b,c,d,A,B,C);
		printf("The Addition matrix is:\n");
		display(a,b,C);
	}
	else
		printf("Addition is Not Possible:");
}
void input(int a,int b,int A[a][b])
{
	int i,j;
	printf("Enter the Array Elements:\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("Array[%d][%d] is ",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}
}
void display(int a,int b,int A[a][b])
{
	int i,j;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("\t%d\t",A[i][j]);
		}
		printf("\n");
	}
}
void add(int a,int b,int c,int d,int A[a][b],int B[c][d],int C[a][d])
{
	int i,j;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
			C[i][j]=A[i][j]+B[i][j];
	}
}