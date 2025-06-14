#include<stdio.h>
#include<conio.h>

void transpose(int[][3],int[][3]);

void main()
{
int a[3][3],b[3][3],i,j;
clrscr();

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	printf("ENTER NO:");
	scanf("%d",&a[i][j]);
	}
}

transpose(a,b);

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	printf("%4d",b[i][j]);
	}
printf("\n");
}

getch();
}

void transpose(int x[][3],int y[][3])
{
int i,j;
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	y[i][j]=x[j][i];
	}
}
}