#include<stdio.h>
#include<conio.h>
void main()
{
char a[50],c,n;
int i,count=0;
clrscr();

printf("ENTER NO:");
gets(a);

printf("ENTER CHARACTER:");
scanf("%c",&c);

printf("ENTER NEW CHAR:");
scanf(" %c",&n);

for(i=0;a[i]!=NULL;i++)
{
	if (a[i]==c)
	{
	a[i]=n;
	count++;
	}
}
a[i]=NULL;

printf("%d",count);

printf("\n\n %s",a);
getch();
}