#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("ENTER 2 NOS:");
scanf("%d,%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("SWAP=%d,%d",a,b);
getch();
}