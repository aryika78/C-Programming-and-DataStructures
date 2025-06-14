#include<stdio.h>
#include<conio.h>

int max(int,int,int);

void main()
{
int a,b,c,m;
clrscr();

printf("ENTER 3 NOS:");
scanf("%d %d %d",&a,&b,&c);

m=max(a,b,c);

printf("MAX=%d",m);

getch();
}
int max(int x,int y,int z)
{
int max=0;
	if(x>y&&x>z)
	{
	max=x;
	}
	else if(y>z)
	{
	max=y;
	}
	else
	{
	max=z;
	}
return max;
}