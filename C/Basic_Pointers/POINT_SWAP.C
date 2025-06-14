#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
int *p,*q;
p=&a,q=&b;
clrscr();

printf("ENTER NO:");
scanf("%d %d",p,q);

*p=*p+*q;
*q=*p-*q;
*p=*p-*q;

printf("\n A=%d",*p);
printf("\n B=%d",*q);

getch();
}