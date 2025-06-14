#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>

struct node
{
	int info1;
	int info2;
	struct node *next;

};

typedef struct node NODE;

void CREATE_LINK_LIST(NODE*);// declaration of function

void Display(NODE*);// declaration of function


void main()
{
NODE *head;
clrscr();

head=(NODE*)malloc(sizeof(NODE));//creating first node

	CREATE_LINK_LIST(head);//calling of function
	Display(head);//calling of function

getch();
}

void CREATE_LINK_LIST(NODE* currptr)
{
 NODE *nextnode;
 char ans;

while(1)
{
	printf("ENTER INFO 1:");
	scanf("%d",&currptr->info1);
	printf("ENTER INFO 2:");
	scanf("%d",&currptr->info2);
	printf("DO YOU WANT TO CONTINUE:");
	fflush(stdin);
	scanf("%c",&ans);


	if(toupper(ans)=='Y')
	{
	nextnode=(NODE*)malloc(sizeof(NODE));
	currptr->next=nextnode;
	currptr=nextnode;
	}
	else
	{
	currptr->next=NULL;
	break;
	}
}
}

void Display(NODE* currptr)
{
	while(currptr!=NULL)
	{
	printf("\n%d %d",currptr->info1,currptr->info2);
	currptr=currptr->next;
	}
}