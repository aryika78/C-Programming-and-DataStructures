#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[10],s=0,max,min;
clrscr();
for(i=0;i<10;i++)
{
printf("ENTER NO:");
scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for(i=0;i<10;i++)
{
s=s+a[i];
	if(a[i]>max)
	{
	max=a[i];
	}
	if(a[i]<min)
	{
	min=a[i];
	}
}
printf("SUM=%d",s);
printf("\nMAX=%d",max);
printf("\nMIN=%d",min);
getch();
}