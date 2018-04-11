/*b> Print the following pattern
					*
				   * *
				  * * *
				 * * * *
*/
#include<stdio.h>
main()
{
	int i,j,k,n;
	printf("Enter any Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(k=1;k<=i;k++)
			printf("* ");
		printf("\n");
	}
}