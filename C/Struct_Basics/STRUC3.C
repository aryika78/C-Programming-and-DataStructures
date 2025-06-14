#include<stdio.h>
#include<conio.h>

struct cricket
{
char pna[20];
char cna[20];
int runs;
} c[5],t;

void main()
{
int i,j;
clrscr();

for(i=0;i<5;i++)
{
printf("\n ENTER NAME OF PLAYER:");
scanf("%s",c[i].pna);

printf("\nENTER COUNTRY NAME OF PLAYER:");
scanf("%s",c[i].cna);

printf("ENTER RUNS:");
scanf("%d",&c[i].runs);


}

for(i=0;i<5;i++)
{
	for(j=i+1;j<5;j++)
	{
		if(c[i].runs<c[j].runs)
		{
		t=c[i];
		c[i]=c[j];
		c[j]=t;
		}
	}
}


for(i=0;i<5;i++)
{
printf("\n NAME OF PLAYER=%s",c[i].pna);

printf("\nNAME OF COUNTRY OF PLAYER=%s",c[i].cna);

printf("\nRUNS=%d",c[i].runs);

}
getch();
}