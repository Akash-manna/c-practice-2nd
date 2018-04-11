//Q14>Print the following Pattern:
/*a)			*				
				**				
				***					
				****			   
*/
#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter any Number:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			printf("*");
		printf("\n");
	}
}