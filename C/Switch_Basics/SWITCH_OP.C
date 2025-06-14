#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
char op;
clrscr();
printf("ENTER 2 NOS.:");
scanf("%d,%d",&a,&b);
printf("ENTER OPERATOR:");
flushall();
scanf("%c",&op);
switch(op)
{
case '+':printf("\nADD=%d",a+b);
case '-':printf("\nSUB=%d",a-b);
case '*':printf("\nMULTIPLICATION=%d",a*b);
case '/':printf("\n DIV=%d",a/b);
default:printf("\n INVALID");
}
printf("\nOUT OF SWITCH CASE");
getch();
}