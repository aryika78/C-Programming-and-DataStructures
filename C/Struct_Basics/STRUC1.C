#include<stdio.h>
#include<conio.h>

struct emp
{
int id;
char na[20];
long int sal;
}e={1,"A",500000},t,k,l,h;

void main()
{
struct emp p;
clrscr();

printf("ENTER INFO:");
scanf("%d %s %ld",&p.id,p.na,&p.sal);

printf("\n %d %s %ld",e.id,e.na,e.sal);
printf("\n %d %s %ld",p.id,p.na,p.sal);

getch();
}