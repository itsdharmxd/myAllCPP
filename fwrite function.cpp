#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	fp=fopen("dharmesh.txt","w");
	if(fp==NULL)
	{
		printf("file note  found");
		exit(0);
	}
	char a[100];
	printf("enter a string\n");
	gets(a);
	fwrite(a,sizeof(char)*strlen(a),1,fp);
	fclose(fp);
	
	
}
