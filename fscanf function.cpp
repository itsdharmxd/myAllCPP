#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *fp;
   fp=fopen("dharmesh.txt","r");
   if(fp==NULL)
   {
   	printf("file not find");
   	exit(0);
   	
   }
   int a[10];
   for(int i=0;i<10;i++)
   {
   	fscanf(fp,"%d",&a[i]);
   	
	   }	
    for(int i=0;i<10;i++)
    {
    	printf("%d",a[i]);
	}
	fclose(fp);
}
