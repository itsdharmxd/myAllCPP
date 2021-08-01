#include<stdio.h>
#include<stdlib.h>
int main()
{
		FILE* fb;
	fb=fopen("fileoffputc.txt","r");
	if(fb==NULL)
	{
		printf("file is invalid\n");
		exit(1);
	}	
	int count=0;
	while(fgetc(fb)!=EOF)
	{
		if(fgetc(fb)=='\n')
		count=count+1;
		
	}
	printf("lines=%d",count);
}
