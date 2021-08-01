#include<stdio.h>
#include<string.h>
struct item{
	int qua;
     char a[];
     float price,amount;
     
	
};
void str(struct item *a)
{
	for(int i=0;i<2;i++)
	{
	printf("quantity=%d\n",a[i].qua);
		puts(a[i].a);
		printf("price=%f\namount=%f\n",a[i].price,a[i].price*(float)a[i].qua);
	}
	
}
int main()
{
	struct item a[2];
	printf("enter quantity\n");
	a[0].qua=20;

	strcpy(a[0].a,"dharmesh");
	a[0].price=4.9;
		a[1].qua=10;
	strcpy(a[1].a,"lalit");
	a[1].price=4.5;
	str(&a[0]);
	
}
