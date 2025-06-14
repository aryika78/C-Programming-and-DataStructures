#include<stdio.h>
#include<conio.h>
// WAP TO PRINT PYRAMID USING FUNCTION AS PER NO OF ROWS

void pyr(int);

void main()
{
int n;
clrscr();

printf("ENTER A NO:");
scanf("%d",&n);

pyr(n);

getch();
}

void pyr(int x)
{
int i,j;
	for(i=1;i<=x;i++)
	{
		for(j=i;j<=x;j++)
		{
		printf(" ");
		}
			for(j=1;j<i;j++)
			{
			printf(" *");
			}
		printf("\n");
	}
}