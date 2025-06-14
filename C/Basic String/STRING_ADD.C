#include<stdio.h>
#include<conio.h>
void main()
{
char a[50],b[50];
int i,j;
clrscr();

printf(" ENTER STRING1 : ");
gets(a);

printf(" ENTER STRING2 : ");
gets(b);

for(i=0;a[i]!=NULL;i++);

a[i]=' ';

for(j=0,i=i+1;b[j]!=NULL;i++,j++)
{
a[i]=b[j];
}
a[i]=NULL;

printf("\n\n  %s",a);
getch();
}