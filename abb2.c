/*Q.37.b>Write a program to abbreviate any given String as follows:-
		Input-Netaji Subhas Chandra Bose
		Output-N.S.C.Bose
*/
#include<stdio.h>
#include<string.h>
main()
{
	char A[100];
	int i,j,k,l;
	printf("Enter The Name:");
	gets(A);
	printf("%c",toupper(A[0]));
	for(i=1;A[i]!='\0';i++)
	{
		if(A[i]==32)
		{
			printf(".%c",toupper(A[i+1]));
			k=l+2;
		}
	}
	for(i=k;A[i]!='\0';i++)
		printf("%c",toupper(A[i]));
}