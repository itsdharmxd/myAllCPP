#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	fp=fopen("dharmesh.txt","r");
	if(fp==NULL)
	{
		printf("file not found");
		exit(0);
	}
	char a[100];
	fread(a,sizeof(a),1,fp);
	puts(a);
	fclose(fp);
	
	
	
	
}
