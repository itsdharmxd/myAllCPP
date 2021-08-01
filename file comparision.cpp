#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fd,*fl;
	fd=fopen("dharmesh.txt","r");
	fl=fopen("lalit.txt","r");
	if(fd==NULL||fl==NULL)
	{
		printf("file not found");
		exit(0);
	}
	while(fgetc(fd)!=EOF||fgetc(fl)!=EOF)
	{
		if(fgetc(fd)==fgetc(fl))
		{
			printf("file is not same");
			exit(0);
		}
	}
	printf("file is same");
	fclose(fd);
	fclose(fl);
}
