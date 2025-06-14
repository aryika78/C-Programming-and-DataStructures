#include <stdio.h>
#include <conio.h>

void main()
{
int a=0,b=1,c,n,count=2;
clrscr();

printf(" ENTER LIMIT : ");
scanf("%d",&n);

printf("\n\n  %d  %d",a,b);
c=a+b;

while(count!=n)
{
printf("  %d",c);
count++;
a=b;
b=c;
c=a+b;
}

getch();
}


