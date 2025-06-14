#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,n,f=1;
clrscr();
printf("ENTER NO:");
scanf("%d",&n);
while (i<=n)
{
f=f*i;
i++;
}
printf("F=%d",f);
getch();
}