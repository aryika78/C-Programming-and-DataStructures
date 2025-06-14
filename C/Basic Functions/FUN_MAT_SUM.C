#include<stdio.h>
#include<conio.h>

int sum(int[][3]);

void main()
{
int i,j,s=0,a[3][3];
clrscr();

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	printf("ENTER NO:");
	scanf("%d",&a[i][j]);
	}
}

s=sum(a);

printf("SUM=%d",s);

getch();
}

int sum(int x[][3])
{
int sum=0,i,j;

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	sum=sum+x[i][j];
	}
}
return sum;
}