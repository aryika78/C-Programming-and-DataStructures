#include<stdio.h>
#include<conio.h>

void replace(int[],int,int);

void main()
{
int a[10],i,n,r;
clrscr();

	for(i=0;i<10;i++)
	{
	printf("ENTER NO:");
	scanf("%d",&a[i]);
	}
printf("ENTER DIGIT:");
scanf("%d",&n);

printf("ENTER NO TO REPLACE:");
scanf("%d",&r);

replace(a,n,r);

for(i=0;i<10;i++)
{
printf("\n%d",a[i]);
}
getch();
}

void replace(int x[],int y,int z)
{
int i;

	for(i=0;i<10;i++)
	{
		if(x[i]==y)
		{
		x[i]=z;
		}
	}
}