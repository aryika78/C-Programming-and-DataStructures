#include<stdio.h>
#include<conio.h>
void main()
{
int no;
clrscr();
printf("ENTER NO:");
scanf("%d",&no);
switch(no)
{
case (no%2==0):printf("%d is EVEN",no);
default:printf("ODD");
}
getch();
}