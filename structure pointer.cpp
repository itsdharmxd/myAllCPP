#include<stdio.h>
struct item{
	char name[10];
	int qua;
	float price,amount;
};
void read(struct item *p)
{
	printf("enter name:");gets(p->name);
	printf("enter quantity");scanf("%d",&p->qua);
	printf("price and amount");scanf("%f%f",&p->price,&p->amount);
	
	
	
}
void print(struct item *p)
{
	printf(" name:");puts(p->name);
	printf(" quantity");printf("%d\n",p->qua);
	printf("price and amount\n");printf("%02.02f\n%02.02f",p->price,p->amount);
	
	
	
}

int main()
{
	struct item a;
	read(&a);
	print(&a);
	
}
