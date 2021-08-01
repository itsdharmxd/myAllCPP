#include<stdio.h>
int main()
{
	FILE *fb;
	fb=fopen("fileoffputc.txt","r");
	
	int count =0;
	while(fgetc!='\0')
	{
	if(	'\n'==fgetc(fb))
	count=count+1;
		
	}
printf("%d: numbers of lines",count);
	
}
