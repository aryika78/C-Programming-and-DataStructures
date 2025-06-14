#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("ENTER 3 NOS.:");
scanf("%d,%d,%d",&a,&b,&c);
(a>b&&a>c)?printf("MAX=%d",a):(b>c)?printf("MAX=%d",b):printf("MAX=%d",c);
getch();
}