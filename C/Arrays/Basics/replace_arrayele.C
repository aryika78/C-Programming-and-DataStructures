#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,count=0,r,n;
clrscr();
for(i=0;i<10;i++)
{
printf("ENTER NO:");
scanf("%d",&a[i]);
}
printf("ENTER NUMBER:");
scanf("%d",&n);
printf("ENTER NO TO REPLACE:");
scanf("%d",&r);
for(i=0;i<10;i++)
{
	if(a[i]==n)
	{
	a[i]=r;
	count++;
	}
}
printf("%d",count);
for(i=0;i<10;i++)
{
printf(" %d",a[i]);
}
getch();
}