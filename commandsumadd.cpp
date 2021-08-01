#include<stdio.h>
#include<stdlib.h>
int main(int a,char *b[])
{
	int sum=0;
	for(int i=0;i<a;i++)
	{
		sum=sum+atoi(b[i]);
		
	}
	printf("sum=%d",sum);
	
}

