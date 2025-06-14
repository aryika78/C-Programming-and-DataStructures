#include<stdio.h>
#include<conio.h>
void main()
{
char a[10],b[10];
int i;
clrscr();

printf("ENTER VALUE:");
gets(a);

for(i=0;a[i]!=NULL;i++)
{
b[i]=a[i];
}
b[i]=NULL;
printf("\n\n %s",b);


getch();
}