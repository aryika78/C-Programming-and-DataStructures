#include<stdio.h>
#include<conio.h>

int max(int[]);

void main()
{
int a[5],i,n;
clrscr();

for(i=0;i<5;i++)
{
	printf("ENTER VALUE:");
	scanf("%d",&a[i]);
}

n=max(a);

printf("\n MAX=%d",n);

getch();

}

int max(int x[])
{
int i,m;
m=x[0];

	for(i=0;i<5;i++)
	{
	if(x[i]>m)
	{
	m=x[i];
	}
	}
	return m;
}