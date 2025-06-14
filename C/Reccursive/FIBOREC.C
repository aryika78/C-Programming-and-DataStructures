#include<stdio.h>
#include<conio.h>

int fibo(int);

void main()
{
int no,i;
clrscr();

printf("ENTER NO:");
scanf("%d",&no);

for(i=0;i<no;i++)
{
printf("  %d",fibo(i));
}

getch();
}

int fibo(int n)
{
	if(n==0||n==1)
	{
	return n;
	}
	else
	{
	return fibo(n-1)+fibo(n-2);
	}
}