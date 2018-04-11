//Q.36>Write to check pallindrom
#include<stdio.h>
#include<string.h>
main()
{
	char A[100];
	int i=0,l,flag;
	printf("Enter the String:");
	gets(A);
	while(A[i]!='\0')
		i++;
	l=i+1;
	for(i=0;i<=l;i++&&l--)
	{
		if(A[i]!=A[l])
		{
			flag=1;
			break;
		}
		else
			flag=0;
	}
	if(flag==0)
		printf("The String is Pallindrom");
	else
		printf("The String is not a Pallindrom");
}