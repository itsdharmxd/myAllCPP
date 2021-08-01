#include<stdio.h>
int fun2(int a,int b)
{
	return a+b;
}
void fun1 (int z)
{
	z=z/2;
	printf("%d",z);
}
int main()
{
	int a=5,b=8;
	fun1(fun2(a,b));
	
}
