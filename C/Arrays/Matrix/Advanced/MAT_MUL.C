#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],c[3][3],i,j,k,s=0;
clrscr();

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	printf("ENTER 2 NO:");
	scanf("%d %d",&a[i][j],&b[i][j]);
	}
}

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	printf("%4d",a[i][j]);

	}
printf("\n");
}
printf("\n\n");

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	printf("%4d",b[i][j]);
	}
printf("\n");
}

printf("\n\n");

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	s=0;
		for(k=0;k<3;k++)
		{
		s=s+a[i][k]*b[k][j];
		}
	c[i][j]=s;
	printf("%4d",c[i][j]);
	}

printf("\n");
}


getch();
}