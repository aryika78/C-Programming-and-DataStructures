#include<stdio.h>
#include<conio.h>

void sort(int[]);
void main()
{
int a[10],i;
clrscr();

for(i=0;i<10;i++)
{
printf("ENTER NO:");
scanf("%d",&a[i]);
}

sort(a);

for(i=0;i<10;i++)
{
printf("\n%d",a[i]);
}
getch();
}

void sort(int x[])
{
int i,j,t;
for(i=0;i<10;i++)
{
	for(j=i+1;j<10;j++)
	{
		if(x[i] > x[j])
		{
		t=x[i];
		x[i]=x[j];
		x[j]=t;
		}

	}
}
}