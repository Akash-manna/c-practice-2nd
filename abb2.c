/*Q.37.b>Write a program to abbreviate any given String as follows:-
		Input-Netaji Subhas Chandra Bose
		Output-N.S.C.Bose
*/
/*#include<stdio.h>
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
}*/
/*#include<stdio.h> 
#include<string.h>

void main()
{
	char name[40];
	char abname[30];
	int i,len,m=1,j=0;
	//puts is used to print string of characters
	//although cout is equivalent to it but gets
	//and cout should not be mixed in one program
	puts("Enter Name: ");
	//gets is used to take string input with spaces
	gets(name);
	//strlen is a built-in function, declared in
	//the string.h header file
	//it returns the length of a string
	len=strlen(name);
	abname[j++]=name[0];
	abname[j++]='.';
	abname[j++]=' ';
	for (i=0;i<len;i++)
	{
		if(name[i]==' ')
		{
			if(m==1) //check to see if it is the middle name
			{
				abname[j++]=name[i+1];
				abname[j++]='.';
				abname[j++]=' ';
				m=0;
				//middle name has been fetched
			}
			else //if it is not the middle name 
			{
				while(name[i]!='\0')  //copy characters until the end of //the string is reached which is //represented by the \0 constant 
				{
					abname[j++]=name[++i];
				}
			}
		}
	}
	abname[j++]='\0';
	//put the end of string constant
	puts("Abbreviated Name: ");
	puts(abname);
}*/
#include<stdio.h>
#include<string.h>
void main()
{
	char a[100];
	char b[100];
	int i=0, j=2;
	printf("Enter a Name\n");
	gets(a);
	b[0] = a[0];
	b[1]='.';
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]==' ')
		{
			b[j]=a[i+1];
			j++;
			b[j]='.';
			j++;
		}
	}
	for(i=strlen(a);a[i]!=' ';i--)
	{
		j=j-2;
	}
	for(i=i+1;i<strlen(a);i++)
	{
		b[j]=a[i];
		j++;
	}
	b[j]='\0';
	printf("The initial is:\n");
	
	
}
/*#include<stdio.h>
#include<string.h>

int main()

{

char str[200];

int i=0;

int j=0;

int len;

printf("Enter a string: ");

gets(str);

printf("%c",*str);

len = strlen(str);

for(i=0;i<=13;i++)

{

if(str[i]==' ')

{

for(j=i;j<len;j++)

{

putchar(str[j]);

}

}

i++;

}

return 0;

}*/