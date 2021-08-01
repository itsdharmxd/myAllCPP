#include<stdio.h>
#include<string.h>
void arraycpy(int *a,int *b)
{
	for(int i=0;i<8;i++)
	{
		int z=a[i];
		a[i]=b[i];
		b[i]=z;
		
	}
	
	
}

int main()
{
	char team[8][100],coteam[8][100];
	for(int i=0;i<8;i++)
	{
		printf("enter team %d\n",i+1);
		scanf("%[^\n]s",team[i]);
		strcpy(coteam[i],team[i]);
	fflush(stdin);	
	}

	static int teamhome[8],teamaway[8],teamrr[8],teammatch[8],teamrecord[8][8];
	for(int i=0;i<56;i++)
	{
	RESTART:
		printf("MATCH %d\n",i+1);
		int c=0;
	 char x[100],y[100];
	printf("enter home team\n");
	scanf("%[^\n]s",x);
		fflush(stdin);	
	printf("enter away team\n");
	scanf("%[^\n]s",y);
		fflush(stdin);	
    int teamno1;
	int teamno2;
		for(int j=0;j<8;j++)
	{
	if(strcmp(x,team[j])==0)	
	{
	teamno1=j;
	c=0;
	break;
	}
	else
	c=1;	
	}
	if(c==1)
{
  printf("INVALID input\n");
	goto RESTART;
}
		for(int k=0;k<8;k++)
	{
	if(strcmp(y,team[k])==0)	
   {
	 teamno2=k;
	 c=0;
	 break;
		
	}
	else
	c=1;
	}
		if(c==1)
{
    printf("INVALID input\n");
	goto RESTART;
}
int coteam1,coteam2;
for(int i=0;i<8;i++)
{
	if(strcmp(x,coteam[i])==0)
	{
		coteam1=i;
	}
}
for(int i=0;i<8;i++)
{
	if(strcmp(y,coteam[i])==0)
	{
		coteam2=i;
	}
}
if(teamrecord[coteam1][coteam2]>0)
{
printf("MATCH cannot be repeat\n");
goto RESTART;
}

teamrecord[coteam1][coteam2]+=1;

	int scorea=0,scoreb=0;
	printf("enter their score in home::away\"3::2\" formate\n");
	scanf("%d::%d",&scorea,&scoreb);
		fflush(stdin);	
	if(scorea>scoreb){
	teamhome[teamno1]=teamhome[teamno1]+2;
	teamrr[teamno1]=scorea-scoreb;
	teamrr[teamno2]=scoreb-scorea;
	teammatch[teamno1]++;
	teammatch[teamno2]++;	
	}
	else if(scorea==scoreb)
	{ 
		teamhome[teamno1]=teamhome[teamno1]+1;
		teamhome[teamno2]=teamhome[teamno2]+1;
	teammatch[teamno1]++;
	teammatch[teamno2]++;	

		
	}
	else{
		teamaway[teamno2]=teamaway[teamno2]+2;
		teamrr[teamno1]=scorea-scoreb;
	teamrr[teamno2]=scoreb-scorea;
	teammatch[teamno1]++;
	teammatch[teamno2]++;	

	}
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<7;j++)
		{
			if((teamhome[j]+teamaway[j])<(teamhome[j+1]+teamaway[j+1]))
			{
				char let[20];
				strcpy(let,team[j]);
				strcpy(team[j],team[j+1]);	
				strcpy(team[j+1],let);		
				int matchx=teammatch[j];
				teammatch[j]=teammatch[j+1];
				teammatch[j+1]=matchx;
				int homex=teamhome[j];
				teamhome[j]=teamhome[j+1];
				teamhome[j+1]=homex;
					int awayx=teamaway[j];
				teamaway[j]=teamaway[j+1];
				teamaway[j+1]=awayx;
				int teamnrrx=teamrr[j];
				teamrr[j]=teamrr[j+1];
				teamrr[j+1]=teamnrrx;
				
				
			}
		}
		
		
	}

 
   	printf("TEAMS               MATCHs(8 matches)    HOME(S)    AWAY(S)    TOTAL(S)   NRR\n\n");
	for(int i=0;i<8;i++)
	{
		printf("%-15s%21d%10d%10d%10d%10d\n",team[i],teammatch[i],teamhome[i],teamaway[i],teamhome[i]+teamaway[i],teamrr[i]);
	}
fflush(stdin);
		
		
	}


	
	
	
}
