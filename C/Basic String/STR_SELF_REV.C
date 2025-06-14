#include<stdio.h>
#include<conio.h>
void main()
{
char a[50],c;
int i,j,l;
clrscr();

printf("ENTER STRING:");
gets(a);

for(l=0;a[l]!=NULL;l++);

for(i=0,j=l-1;i<l/2;i++,j--)
{
c=a[i];
a[i]=a[j];
a[j]=c;
}
printf("\n\n%s",a);
getch();
}

