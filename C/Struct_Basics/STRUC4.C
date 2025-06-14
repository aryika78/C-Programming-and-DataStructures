#include<stdio.h>
#include<conio.h>

struct student
{
int id;
char na[20];
int m1,m2,m3;
int tot,per;
}s[5],t;

void main()
{
int i,j;
clrscr();

for(i=0;i<5;i++)
{
printf("\nENTER STUDENT %d ID: ",i+1);
scanf("%d",&s[i].id);

printf("\nENTER NAME:");
scanf(" %s",s[i].na);

printf("\nENTER MARKS:");
scanf("%d %d %d",&s[i].m1,&s[i].m2,&s[i].m3);

s[i].tot=s[i].m1+s[i].m2+s[i].m3;
s[i].per=s[i].tot/3;

}

for(i=0;i<5;i++)
{
	for(j=i+1;j<5;j++)
	{
		if(s[i].per<s[j].per)
		{
		t=s[i];
		s[i]=s[j];
		s[j]=t;
		}
	}
}

for(i=0;i<5;i++)
{
printf("\nID=%d",s[i].id);

printf("\nNAME=%s",s[i].na);

printf("\nMARKS=%d %d %d",s[i].m1,s[i].m2,s[i].m3);

printf("\nTOTAL=%d",s[i].tot);

printf("\nPERCENTAGE=%d",s[i].per);
}



getch();
}