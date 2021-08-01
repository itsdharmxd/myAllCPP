#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("insert a number");
	scanf("%d",&a);
	printf("%d",a);
	getch();
	printf("insert the second number");
	scanf("%d",&b);
	
	char z[3][3];
	z[0][0]=a;
	
	
	z[2][2]=b;
	
	for(int i=0;i<3;i++)		
	{
		for(int j=0;j<3;j++)
		if(i==1&&j==1)
		printf("\\");
		else if(1)
        printf("%c",z[i][j]);
		else
		printf(" ");	
		
		
		}	
}
