#include<stdio.h>
int main()
{
	int a[3][3];
	printf("enter the elements\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("before\n\n");
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("\t%d\t",a[i][j]);
		}
		printf("\n\n");
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(j<i)
			{
				int t=a[i][j];
				a[i][j]=a[j][i];
				a[j][i]=t;
			}
			
		}
		
	}
	printf("after\n\n");
			for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("\t%d\t",a[i][j]);
		}
		printf("\n\n");
	}
}
