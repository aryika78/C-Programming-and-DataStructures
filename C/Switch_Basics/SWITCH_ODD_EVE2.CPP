#include<stdio.h>
#include<conio.h>
void main()
{
int no;
clrscr();
printf("ENTER NUMBER:");
scanf("%d",&no);
switch(no%2==0)
{
case 1:printf("%d is even",no);
break;
default:printf("%d is odd",no);
break;
}
getch();
}