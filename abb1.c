/*Q.37.a>Write a program to abbreviate any given String as follows:-
	Input- Netaji Subhas Chandra Bose
	Output- N.S.C.B
*/
#include<stdio.h>
#include<string.h>
void main()
{
	char A[100];
	int i=0,j,k;
	printf("Enter the Name:");
	gets(A);
	printf("%c",toupper(A[0]));
	for(i=1;A[i]!='\0';i++)
	{
		if(A[i]==32)
		{
			printf(".%c",toupper(A[i+1]));
		}
	}
}