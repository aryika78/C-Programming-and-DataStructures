#include<stdio.h>
#include<conio.h>

int sum(int);

void main()
{
	int n;
	clrscr();
	printf("\n ENTER NUMBER:");
	scanf("%d",&n);

	if(n<0)
	{
		printf("\n INVALID NO:");
	}
	else
	{
		printf("\n THE SUM OF %d is %d",n,sum(n));
	}
getch();
}
int sum(int x)
{
	if(x==0)
	{
		return 0;
	}
	else
	{
		return x+sum(x-1);
	}
}