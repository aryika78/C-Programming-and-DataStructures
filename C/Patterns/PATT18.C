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
	for(j=i-1;j>=0;j--)
	{
	printf("%d",j);
	}
	for(j=2;j<=i;j++)
	{
	printf("%d",j-1);
	}
printf("\n");
}
getch();
}