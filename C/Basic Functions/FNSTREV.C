#include<stdio.h>
#include<conio.h>

void rev(char[]);

void main()
{
char na[30];
clrscr();

printf("ENTER STRING:");
gets(na);

rev(na);

printf("\n\n %s",na);
getch();
}

void rev(char st[])
{
int i,j,l;
char t;
for(l=0;st[l]!=NULL;l++);

for(i=0,j=l-1;i<l/2;i++,j--)
{
t=st[i];
st[i]=st[j];
st[j]=t;
}
}