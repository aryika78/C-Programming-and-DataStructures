#include<stdio.h>
#include<conio.h>
void main()
{
int x,n,i=1,p=1;
clrscr();
printf("ENTER X AND N:");
scanf("%d,%d",&x,&n);
while(i<=n)
{
p=p*x;
i++;
}
printf("POWER=%d",p);
getch();
}