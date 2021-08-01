#include<stdio.h>
union str{
	unsigned int a;
	unsigned char s[6];
	
};
int main()
{
	union str d;
	printf("enter in hex\n");
	d.a=0xaabbccdd;
	for(int i=0;i<6;i++)
	printf("%x\n",d.s[i]);
	
	
	
}
