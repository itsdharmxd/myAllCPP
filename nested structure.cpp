#include<stdio.h>
struct employ{
	char name[10];
	int roll;
	struct DOB{
		int dd,mm,yy;
	}birth;
};
int main()
{
	struct employ a;
	printf("enter the employ\n");
	gets(a.name);
	scanf("%d%d%d%d",&a.roll,&a.birth.dd,&a.birth.mm,&a.birth.yy);
	printf("details are\n");
	puts(a.name);
	printf("rol=%d\ndate of birth=%d:%d:%d",a.roll,a.birth.dd,a.birth.mm,a.birth.yy);

	
}
