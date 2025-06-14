#include<stdio.h>
#include<conio.h>

void tab(int);
void main()
{
int n;
clrscr();

printf("ENTER NO:");
scanf("%d",&n);

tab(n);

getch();
}
void tab(int t)
{
	int i;
	for (i=1;i<=10;i++)
	{
	printf("\n%d*%d=%d",t,i,t*i);
	}
}