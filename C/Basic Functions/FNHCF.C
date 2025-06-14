#include<stdio.h>
#include<conio.h>

int hcf(int,int);
void main()
{
int a,b,h;
clrscr();
printf("ENTER 2 NOS:");
scanf("%d %d",&a,&b);

h=hcf(a,b);

printf("HCF=%d",h);

getch();
}


int hcf(int x,int y)
{
int r;

while(x!=y)
{
	if(x>=y)
	{
	x=x-y;
	}
	else if(y>x)
	{
	y=y-x;
	}
}

r=x;
return r;
}