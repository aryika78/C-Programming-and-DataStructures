#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
printf("ENTER A CHAR IN UPPER OR LOWER CASE:");
scanf("%c",&a);
(a>=65&&a<=90)?printf("UPPER CASE"):printf("LOWER CASE");
getch();
}