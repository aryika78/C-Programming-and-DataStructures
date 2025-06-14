#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,s=0;
clrscr();

for(i=0;i<5;i++) //input
{
printf("ENTER NO:");
scanf("%d",&a[i]);
}

for(i=4;i>=0;i--)//reverse
{
printf("\n %d",a[i]);
}

for(i=0;i<5;i++)//sum
{
s=s+a[i];
}
printf("\n\n SUM=%d",s);

getch();
}