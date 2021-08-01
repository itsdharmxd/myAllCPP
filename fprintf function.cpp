#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	fp=fopen("dharmesh.txt","w");
	if(fp==NULL)
	{
		printf("no file present");
		exit(0);
	}
	int a[10];
	printf("enter an array\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<10;i++)
	{
		fprintf(fp,"%d\n",a[i]);
	}
	fclose(fp);
}
