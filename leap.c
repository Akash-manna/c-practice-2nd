//Q12>Write a Program to Print all Leap Year from a specific year to another specific year
#include<stdio.h>
void main()
{
	int i,j;
	printf("Enter the beginning Year:");
	scanf("%d",&i);
	printf("Enter the Ending year");
	scanf("%d",&j);
	printf("All Leap years from year %d to %d are\n",i,j);
	for(i=i;i<=j;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0))
			printf("%d\n",i);
	}
}
