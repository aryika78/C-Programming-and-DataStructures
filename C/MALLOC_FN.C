#include<stdio.h>
#include<conio.h>
#include<alloc.h>

struct emp
{
	int id;
	char na[20];
};

typedef struct emp E;

void main()
{
E *e1;
clrscr();
//struct emp e1;

e1=(E*)malloc(sizeof(E)) ;

printf("\nENTER EMPLOYEE ID:");
scanf("%d",&e1->id);

printf("\n ENTER NAME:");
scanf("%s",e1->na);

printf("\n ID: %d,NAME : %s",e1->id,e1->na);
getch();

}