#include<stdio.h>
int main()
{
	int n;
	printf("enter the no of elements\n");
	scanf("%d",&n);
	int b[n];
	printf("enter the elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
		
		
	}
	int high=0,count=0;
	for(int i=0;i<n;i++)
	{ 
	int z=b[i]+1;
		for(int j=0;j<n;j++)
		{
		if(b[j]==b[i]||b[j]==z)
		count=count+1;	
		}
	if(count>high)
	high=count;
	count=0;	
	}
	printf("highest no of set:%d",high);
}
