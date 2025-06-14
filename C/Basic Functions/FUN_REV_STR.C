#include<stdio.h>
#include<conio.h>

void rev(char []);

void main()
{
char a[30];
clrscr();

printf("ENTER STRING:");
gets(a);

rev(a);

printf("\n %s",a);

getch();
}

void rev(char ch[])
{
int i,j;
char r[30];

for(j=0;ch[j]!=NULL;j++);

for(i=0,j=j-1;j>=0;j--,i++)
{
r[i]=ch[j];
}
r[i]=NULL;

}