#include<stdio.h>
#include<conio.h>

int sum(int);

void main()
{
int n,s=0;
clrscr();
printf("ENTER NO:");
scanf("%d",&n);

s=sum(n);
printf("SUM=%d",s);

getch();
}

int sum(int x)
{
	int s=0;
	while(x!=0)
	{
	s=s+x%10;
	x=x/10;
	}
	return s;
}

