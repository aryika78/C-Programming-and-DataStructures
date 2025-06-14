#include<stdio.h>
#include<conio.h>

int fac(int);

void main()
{
int n,f;
clrscr();
printf("ENTER NO:");
scanf("%d",&n);

f=fac(n);

printf("FACTORIAL=%d",f);

getch();
}

int fac(int a)
{
int f=1;
	while(a>=1)
	{
	f=f*a;
	a--;
	}
return f;
}