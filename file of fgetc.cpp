#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	FILE* fb;
	fb=fopen("fileoffputc.txt","w");
	if(fb==NULL)
	{
		printf("file is invalid\n");
		exit(1);
	}
	char a[50];
	printf("enter a string\n");
	for(int i=0;i<50;i++)
	scanf("%[^\t]s",a[i]); 
	for(int i=0;i<strlen(a);i++)
	{
		fputc(a[i],fb);
	}
	
	fclose(fb);
}
