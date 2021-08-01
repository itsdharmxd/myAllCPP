#include<stdio.h>
#include<stdlib.h>
int main(int z,char *x[])
{
	int a=atoi(x[1]);
	int b=atoi(x[3]);
	int c=0;
	switch (*x[2])
{
		case '+':
		 c=a+b;break;
	case '-':
	    c=a-b;break;
	case '*':
	    c=a*b;break;
	case '/':	   	
	  c=a/b;break;
	  default:
	  printf("input error");
}
printf("operation=%d",c);
	
}
