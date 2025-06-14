#include<stdio.h>
void main()
{
int a[50],i=0,n,s,flag=0,e;
clrscr();
printf("\nEnter number of elements:");
scanf("%d",&n);

for(i=0;i<n;i++)
{
	printf("\nEnter array element:");
	scanf("%d",&a[i]);
}
printf("\n\n\nArray:");
for(i=0;i<n;i++)
{
	printf("\n%d",a[i]);
}
printf("\n Enter element which you want to update:");
scanf("%d",&s);

printf("\n\n Enter element by which you want to update:");
scanf("%d",&e);
for(i=0;i<n;i++)
{
	if(a[i]==s)
	{
	flag=1;
	a[i]=e;
	}
}
if(flag==0)
{
printf("\n Not FOund");
}
else
{
printf("\nFound");
printf("\n\n Updated Array:");
for(i=0;i<n;i++)
{
printf("\n%d",a[i]);
}
}
getch();
}