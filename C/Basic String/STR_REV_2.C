#include<stdio.h>
#include<conio.h>
void main()
{
char a[10],r[10];
int i,j;
clrscr();

printf("ENTER VALUE:");
gets(a);

for(j=0;a[j]!=NULL;j++);

for(i=0,j=j-1;j>=0;j--,i++)
{
r[i]=a[j];
}
r[i]=NULL;
printf("\n\n %s",r);
getch();
}