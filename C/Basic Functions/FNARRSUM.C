/*in call by ref if we want to make changes in array itself then we
dont return but if we want to generate a new value then we need to
return value*/
#include<stdio.h>
#include<conio.h>

int sum(int[]);

void main()
{
int a[5],i,s;
clrscr();

for(i=0;i<5;i++)
{
printf("ENTER VALUE:");
scanf("%d",&a[i]);
}

s=sum(a);

printf("SUM=%d",s);

getch();
}

int sum(int x[])
{
int i,s=0;
for(i=0;i<5;i++)
{
s=s+x[i];
}
return s;
}