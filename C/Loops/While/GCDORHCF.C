#include <stdio.h>
#include <conio.h>

void main()
{
int a,b;
clrscr();

printf(" ENTER 2 NO : ");
scanf("%d %d",&a,&b);

while(a!=b)
{
	if(a>b)
	{
	a=a-b;
	}
	else if(b>a)
	{
	b=b-a;
	}
}

printf("\n\n HCF = %d",a);

getch();
}
