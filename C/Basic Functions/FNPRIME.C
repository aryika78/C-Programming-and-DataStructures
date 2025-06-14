#include<stdio.h>
#include<conio.h>

void prime(int);
void main()
{
int n;
clrscr();

printf("ENTER NO:");
scanf("%d",&n);

prime(n);
getch();

}
void prime(int x)
{
int i,p=0;
	for(i=1;i<=x;i++)
	{
	if(x%i==0)
	p++;
	}
	if(p==2)
	{
	printf("THIS IS PRIME");
	}
	else
	{
	printf("THIS IS COMPOSITE");
	}
}