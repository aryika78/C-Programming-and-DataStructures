#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,k;
int *p;
p=&a[0];

clrscr();

for(i=0;i<=10;i++)
{
printf("ENTER NO:");
scanf("%d",(p+i));
}

for(i=0;i<10;i++)
{
	for(j=i+1;j<10;j++)
	{
	if(*(p+i)>*(p+j))
	{
	k=*(p+j);
	*(p+j)=*(p+i);
	*(p+i)=k;

	}
	}
}
for(i=0;i<10;i++)
{
printf(" %d",*(p+i));
}
getch();
}