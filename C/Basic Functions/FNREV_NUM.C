#include<stdio.h>
#include<conio.h>

int rev(int);
void main()
{
int n,r;
clrscr();
printf("ENTER NO:");
scanf("%d",&n);

r=rev(n);
printf("REV=%d",r);

getch();
}
int rev(int x)
{
	int rev=0,n;
	while(x>=1)
	{
	n=x%10;
	rev=(rev*10)+n;
	x=x/10;
	}
	return rev;
}
