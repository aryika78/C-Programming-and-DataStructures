#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n,j,t=10;
clrscr();
for(i=0;i<10;i++)
{
printf("ENTER VALUE:");
scanf("%d",&a[i]);
}
printf("ENTER NO TO DELETE:");
scanf("%d",&n);

for(i=0;i<t;i++)
{
	if(a[i]==n)
	{
		for(j=i;j<t;j++)
		{
		a[j]=a[j+1];
		}
	t--;
	i--;
	}
}

for(i=0;i<t;i++)
{
printf("  %d",a[i]);
}

getch();
}