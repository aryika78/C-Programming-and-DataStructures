#include<stdio.h>
#include<conio.h>

void convert(char[]);

void main()
{
char na[30];
int i,j;
clrscr();

printf("ENTER STRING:");
gets(na);

convert(na);

printf("\n\n %s",na);

getch();
}

void convert(char ch[])
{
int i;
for(i=0;ch[i]!=NULL;i++)
{
	if(ch[i]>=65&&ch[i]<=90)
	{
	ch[i]=ch[i]+32;
	}
	else if(ch[i]>=97&&ch[i]<=122)
	{
	ch[i]=ch[i]-32;
	}
}
}