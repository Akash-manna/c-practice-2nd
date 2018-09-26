//Q.23>Write a program using recurssive method to find the sum of digits of a Number

#include <stdio.h>
int sum (int num)
{
	if (num != 0)
	{
		return (num % 10 + sum (num / 10));//Here, sum(n/10) is calling sum() method again inside the same method.
	}
    else
	{
		return 0;
	}
} 
int main()
{
	int num, result;
	printf("Enter the number: ");
	scanf("%d", &num);
	result = sum(num);
	printf("Sum of digits in %d is %d\n", num, result);
	return 0;
}
 

