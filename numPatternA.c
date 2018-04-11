/*Q.15.a>Write a Program to print the following patetrn
			0
			1 0
			0 1 0
*/
#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter the number of lines:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			printf("%d ",(i+j)%2);
		printf("\n");
	}
}