#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
for(i=1;i<=5;i++)
{
	for(j=1;j<=5;j++)
	{
	printf("%d",i*j);
	}
printf("\n");
}
getch();
}