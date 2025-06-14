#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char a[50];
int i;
clrscr();

printf("ENTER STRING:");
gets(a);

a[0]=toupper(a[0]);
for(i=1;a[i]!=NULL;i++)
{
	if(a[i]==' ')
	{
	i=i+1;
	a[i]=toupper(a[i]);
	}
	else
	{
	a[i]=tolower(a[i]);
	}
}

printf("\n\n %s",a);

getch();
}