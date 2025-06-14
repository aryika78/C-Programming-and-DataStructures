#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
char c;

int *p,*q;
char *r;
p=&a;
q=&b;
r=&c;
clrscr();

printf("ENTER NOS:");
scanf("%d %d",p,q);
printf("operator:");
scanf(" %c",r);

switch(*r)
{
	case'+':
	printf("ADD=%d",*p+*q);
	break;

	case'-':
	printf("SUB=%d",*p-*q);
	break;

	case'*':
	printf("MULTIPLICATION=%d",*p * *q);
	break;

	case'/':
	printf("DIV=%d",*p / *q);
	break;

}
getch();
}