#include<stdio.h>
#include<conio.h>
void main()
{
int f=1,n;
int *p,*q;
p=&n;
q=&f;

clrscr();

printf("ENTER NO:");
scanf("%d",p);

while(*p>=1)
{
*q=*q * *p;
--*p;//pre increment changes value/post increment changes address
}

printf("F=%d",*q);
getch();
}