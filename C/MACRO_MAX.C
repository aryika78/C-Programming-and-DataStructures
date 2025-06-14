#include<stdio.h>
#include<conio.h>
#define max(a,b) (a>b) ? a : b

void main()
{
int a,b;
clrscr();

printf("ENTER NOS:");
scanf("%d %d",&a,&b);

printf("MAX=%d",max(a,b));
getch();
}