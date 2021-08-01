#include<stdio.h>
int main()
{
	FILE *fb;
	fb=fopen("fileoffputc.txt","r");
	char a[100];
	for(int i=0;i<100;i++)
	{
		a[i]=fgetc(fb);
		
	}
	puts(a);
	
}
