#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,count=0,n;
clrscr();
for(i=0;i<10;i++)
{
printf("ENTER NO:");
scanf("%d",&a[i]);
}
printf("ENTER NUMBER:");
scanf("%d",&n);
for(i=0;i<10;i++)
{
if(a[i]==n)
{
count++;
}
}
printf("%d",count);
getch();
}