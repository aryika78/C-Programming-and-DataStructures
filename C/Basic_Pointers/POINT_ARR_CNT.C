#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,count=0,n;
int *p,*s;

p=&a[0];
s=&n;

clrscr();

for(i=0;i<10;i++)
{
printf("ENTER NO:");
scanf("%d",(p+i));
}
printf("ENTER NUMBER:");
scanf("%d",s);

for(i=0;i<10;i++)
{
	if(*(p+i)==*s)
	{
	count++;
	}
}
printf("%d",count);

getch();
}

