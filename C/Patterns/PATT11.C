#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,p=1;
clrscr();
for(i=1;i<=5;i++)
{
	for(j=1;j<=i;j++)
	{
	printf("%d",p%2);
	p++;
	}
printf("\n");
}
getch();
}