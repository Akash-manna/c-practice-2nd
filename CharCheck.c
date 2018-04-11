/*Q.07>>Write a C Program to read a single character from the user
Then check whether the given character is an alphabet,number or a special character.
If it is an alphabet, then convert it to Uppercase and Vice-Versa.*/
#include<stdio.h>
main()
{
	char a,b;
	printf("Enter any character:");
	scanf("%c",&a);
	b=toascii(a);
	if(b>63&&b<=90)
	{
		printf("This is a Uppercase Alphabet!");
		printf("\nlowercase is: %c",b+32);
	}
	else if(b>=92&&b<=122)
	{
		printf("This is a lowercase Alphabet!");
		printf("\nUppercase is: %c",b-32);
	}
	else if(b>=48&&b<=57)
		printf("Number");
	else
		printf("Special Character!");
}