#include<stdio.h>
#include<conio.h>

void rep(char[],char,char);

void main()
{
char a[30],n,r;
clrscr();

printf("ENTER STRING:");
gets(a);

printf("ENTER CHAR:");
scanf("%c",&n);

printf("ENTER CHAR TO REPLACE:");
scanf(" %c",&r);

rep(a,n,r);

printf("\n %s",a);

getch();
}

void rep(char x[],char y,char z)
{
int i;

for(i=0;x[i]!=NULL;i++)
{
	if(x[i]==y)
	{
	x[i]=z;
	}
}

}