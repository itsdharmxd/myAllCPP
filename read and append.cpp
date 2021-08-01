#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	FILE *fb;
	fb=fopen("dharmesh.txt","r+");
	if(fb==NULL)
	{
		
		printf("invalid input");
		exit(0);
	}
	char s[500];
	char c;
	int i=0;
	while(fgetc(fb)!=EOF)
	{
		c=fgetc(fb);
		i++;
		printf("%c",c);
	fflush(stdin);	
	}

	printf("file content\n");
    puts(s);
    printf("enter the apppent string\n");
    gets(s);
    for(int i=0;i<strlen(s);i++)
    {
    	fputc(s[i],fb);
	}
fclose(fb);
	
}
