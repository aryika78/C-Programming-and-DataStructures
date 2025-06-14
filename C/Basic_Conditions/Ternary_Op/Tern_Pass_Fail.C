#include<stdio.h>
#include<conio.h>
void main()
{
int m1,m2,m3;
clrscr();
printf("ENTER 3 MARKS:");
scanf("%d,%d,%d",&m1,&m2,&m3);
(m1>40&&m2>40&&m3>40)?printf("PASS"):printf("FAIL");
getch();
}