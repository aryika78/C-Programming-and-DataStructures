#include <stdio.h>
#include<stdlib.h>
#define max 10

struct node
{
    int info;
    struct node *link;                            
};

typedef struct node NODE;
int cnt=0;

NODE* front=NULL;
NODE* rear=NULL;
void Insert();
void Delete();
void List();


void main()
{
    int ch;
    while(1)
    {
        printf("\nQueue operation:");
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. List");
        printf("\n4. Exit");
        printf("\nEnter your choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: Insert();
            break;
            case 2: Delete();
            break;
            case 3: List();
            break;
            case 4: exit(0);
        }
    }
}

NODE* Getnode()
{
    NODE* newnode;
    newnode=(NODE*)malloc(sizeof(NODE));
    return newnode;
}
void Insert()
{
    NODE* newnode;
    newnode=Getnode();
    if(cnt>=max)
    {
        printf("\nQis full");
    }
    else if(front==NULL)
    {
        front=newnode;
        rear=newnode;
        printf("\nEnter info:");
        scanf("%d",&newnode->info);
        newnode->link=NULL;
        cnt++;
    }
    else
    {
        rear->link=newnode;
        rear=newnode;
        printf("\nEnter info:");
        scanf("%d",&newnode->info);
        newnode->link=NULL;
        cnt++;
    }
}

void Delete()
{
    NODE* rmnode;
    if(front== NULL)
    {
        printf("\nQ is empty");
    }
    else if(front == rear)
    {
        front=rear=NULL;
    }
    else
    {
        rmnode=front;
        front=front->link;
        free(rmnode);
    }
}

void List()
{
    if(front== NULL)
    {
        printf("\nQ is empty");
    }
    else
    {
        while(front!=rear->link)
        {
            printf("\n%d",front->info);
            front=front->link;
        }
    }
}