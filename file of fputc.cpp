#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	FILE* fb;
	fb=fopen("dharmesh.txt","w");
	if(fb==NULL)
	{
		printf("file is invalid\n");
		exit(1);
	}	
	char a[500];
	printf("enter a string\n");

	scanf("%[^\t]s",a); 
	for(int i=0;i<strlen(a);i++)
	{
		fputc(a[i],fb);
	}
	
	fclose(fb);
}
