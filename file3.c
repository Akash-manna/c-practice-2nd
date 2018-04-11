//Write a Program to merge a file
#include<stdio.h>
#include<stdlib.h>
main(int argc,char *argv[])
{
	FILE *fs,*ft;
	char c;
	fs=fopen(argv[1],"r");
	ft=fopen(argv[2],"w");
	if(argc!=3)
		printf("\nInsufficient Argument!");
	if(fs==NULL)
		printf("\nError in File Name!");
	while((c=fgetc(fs))!=EOF)
		fputc(c,ft);
	fclose(fs);
	fclose(ft);
}