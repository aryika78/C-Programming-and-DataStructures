#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,k;
clrscr();
for(i=0;i<10;i++)
{
printf("ENTER NO:");
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
	for(j=i+1;j<10;j++)
	{
	if(a[i]>a[j])
	{
	k=a[j];
	a[j]=a[i];
	a[i]=k;

	}
	}
}
for(i=0;i<10;i++)
{
printf(" %d",a[i]);
}
getch();
}
