#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	printf("enter  number  of elements\n");
	scanf("%d",&a);
	int *p;
	p=(int *)malloc(a*sizeof(int));
	printf("enter %d elemesnt\n",a);
	int sum=0;
	for(int i=0;i<a;i++)
	{
	  scanf("%d",&p[i]);	
	sum =sum+p[i];	
	}
	printf("sum=%d",sum);
	
	free(p);
	
}
