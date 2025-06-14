#include<stdio.h>
#include<conio.h>
void main()
{
int a,n,s=0,t;
clrscr();
printf("ENTER NO:");
scanf("%d",&n);
t=n;
while(n>=1)
{
a=n%10;
s=s+(a*a*a);
n=n/10;
}
if(s==t)
{
printf("ARMSTRONG NUMBER");
}
else
{
printf("NOT ARMSTRONG NUMBER");
}
getch();
}