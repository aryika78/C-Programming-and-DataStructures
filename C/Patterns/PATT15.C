#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k=1;
clrscr();
for(i=1;i<=5;i++)
{
	for(j=i;j<=5;j++)
	{
	printf(" ");
	}
	for(j=1;j<=i;j++)
	{
	k=k+2;
	printf("* ",k);
	}
printf("\n");
}
getch();
}