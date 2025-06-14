#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("ENTER NO:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)
	{
		if(i==1||i==n||j==1||j==n)
		{
		printf("*");
		}
		else
		{
		printf(" ");
		}
	}
printf("\n");
}
getch();
}