//Q.38>Write a Program to count the number of characters,space,tab,\n from an existing file
#include<stdio.h>
void main()
{
	FILE *fp;
	char ch;
	char filename[100];
	printf("Enter the filename:\n");
	gets(filename);
	int nt=0,ni=0,ns=0,nc=0;
	//fp=fopen("test1.txt","r");
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("\n File Does not exist");
	}
	else
	{
		while(1)
		{
			ch=fgetc(fp);
			if(ch==EOF)
				break;
			nc++;
			if(ch=='\t')
				nt++;
			if(ch==' ')
				ns++;
		}
	}
	fclose(fp);
	printf("The Number of Tabs is %d\n",nt);
	printf("The Number of Characters is %d\n",nc);
	printf("The Number of Spaces is %d\n",ns);
}