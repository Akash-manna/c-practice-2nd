/* Bidisha Internal Model Question 4:
*	Write a C program that will do the following tasks:
*	1. Sum of digits of a given number.
*	2. Reverse of the number.
*	3. Calculate the difference between original number and sum of digits.
*	4. Calculate the difference between original number and reverse.
*/
#include<stdio.h>
int main()
{
	int num,r, buffer, sum=0, rev=0;
	unsigned int diffsum, diffrev;
	printf("Enter the Original Number: ");
	scanf("%d",&num);
	buffer=num;
	while(buffer>0){
		r = buffer%10;
		rev = 10*rev+r;
		buffer = buffer/10;
		sum = sum+r;
	}
	printf("The Sum of Digits of %d is %d\n",num,sum);
	printf("The Reverse of %d is %d\n",num,rev);
	diffsum = num - sum;
	diffrev = num - rev;
	printf("The Difference between the original and sum is %d\n",diffsum);
	printf("The difference between the original and reverse is %d\n",diffrev);
	return 0;
}