#include<stdio.h>
#include<stdlib.h>
int main()
{ int n;
    printf("enter the no of elemesnt\n");
    scanf("%d",&n);
	int a[n];
	printf("enter an array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	fflush(stdin);	
		
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;i<n-1;j++)
		{
			if (a[i]<a[i+1])
			{
				int t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
			
		}
	}
    if(n%2==0)
	{
		int x=(n-1)/2;
		int d=a[x]+a[x+1];
		printf("Median =%d",d/2);
	}
	else
	{
		printf("Median =%d",a[n/2]);
	}
	
	
}
