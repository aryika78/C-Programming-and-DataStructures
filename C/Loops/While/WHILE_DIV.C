#include<stdio.h>
#include<conio.h>
void main()
{
int i=1;
clrscr();
while(i<=100)
{
	if(i%5==0||i%9==0)
	{
	printf("\n%d",i);
	}
i++;
}
getch();
}