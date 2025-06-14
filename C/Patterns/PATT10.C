#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
for(i=1;i<=5;i++)
{
	for(j=i;j<=5;j++)
	{
	printf(" ");
	}
	for(j=1;j<=i;j++)
	{
	printf("%d",j);
	}
	for(j=i-1;j>=1;j--)
	{
	printf("%d",j);
	}
printf("\n");
}
getch();
}