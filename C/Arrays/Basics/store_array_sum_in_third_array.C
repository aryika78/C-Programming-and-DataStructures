#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],b[5],c[5],i;
clrscr();
for(i=0;i<5;i++)
{
printf("ENTER NO:");
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
printf("ENTER NO:");
scanf("%d",&b[i]);
}
for (i=0;i<5;i++)
{
c[i]=a[i]+b[i];
printf("\n%d",c[i]);
}
getch();
}