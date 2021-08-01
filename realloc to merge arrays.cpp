#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[5],b[5];
	printf("enter array a\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
		printf("enter array b\n");

	for(int i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	int* p= (int *)calloc(10,sizeof(int));
    for(int i=0;i<10;i++)
	{
		if(i<5)
		p[i]=a[i];
		else
		p[i]=b[i-5];
		
		}
		for(int i=0;i<10;i++)
		{
			printf("%d\n",p[i]);
			}	
}
