#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],n,i;
clrscr();

for(i=0;i<5;i++)
{
printf("ENTER NO:");
scanf("%d",&a[i]);
}                 

printf("ENTER LOCATION OF NO TO BE DELETED:");
scanf("%d",&n);

for(i=n;i<5;i++)
{
a[i-1]=a[i];
}

for(i=0;i<4;i++)
{
printf("\n%d",a[i]);
}

getch();
}