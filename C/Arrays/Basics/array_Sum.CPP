#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,s=0;
clrscr();

for(i=0;i<5;i++)
{
printf("ENTER NO:");
scanf("%d",&a[i]);
}

for(i=0;i<5;i++)
{
s=s+a[i];
}
printf("SUM=%d",s);

getch();
}