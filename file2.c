//Q.39>Write a Program to copy the Context of one file to another
#include<stdio.h>
main()
{
	FILE *fp,*fs,*ft;
	char ch;
	fp=fopen("ref1.c","r");
	ft=fopen("ref2.c","w");
	if(fp==NULL||ft==NULL)
	{
		printf("\nFile Does Not Exist");
	}
	else
	{
		while(1)
		{
			ch=fgetc(fs);
			if(ch==EOF)
				break;
			fputc(ch,ft);
		}
	}
	fclose(ft);
	fclose(fp);
}