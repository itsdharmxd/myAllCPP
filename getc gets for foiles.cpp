#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("dharmesh.txt","w");
    if(fp==NULL)
    {
    	printf("file not created");
    	exit(0);
    	
	}
	putc('a',fp);
	putc('b',fp);
	putc('c',fp);
	fclose(fp);
	fp=fopen("dharmesh.txt","r");
	if(fp==NULL)
	{
		printf("file not found");
		exit(0);
	}
	printf("%c",getc(fp));
	printf("%c",getc(fp));
	printf("%c",getc(fp));
   
	
	fclose(fp);
	
	
}
