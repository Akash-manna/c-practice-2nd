/*Bidisha Internal Model Question 2:
* 	Write a C Program that will print the following sequence of numbers:
*	2, -4, +6, -8,...,+n
*/
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the Limit N: ");
	scanf("%d",&n);
	for(i=2;i<=n;i=i+2)
	{
		if(i%4==0){
			printf("-");
		}
		else{
			printf("+");
		}
		printf("%d, ",i);
		
		//printf("%d\n",i);
	}
	/*for(j=2;j<=n;j=j+2){
		printf("%d, ",j);
	}*/
	return 0;
}