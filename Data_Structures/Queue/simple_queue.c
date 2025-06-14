//WAP to perform insert and delete routines on a queue
#include<stdio.h>
#include<stdlib.h>

#define max 5

void screen();
void Qinsert();
void Qdelete();
void list();

int ch, front=-1,rear=-1;
int Q[max];

void main()
{
    while(1)
    {
        screen();
        switch(ch)
        {
            case 1:
            Qinsert();
            break;
            case 2:
            Qdelete();
            break;
            case 3:
            list();
            break;
            default:
            exit(0);
        }
    }
}

void screen()
{
    printf("\nQueue operation:");
    printf("\n1. Insert");
    printf("\n2. Delete");
    printf("\n3. List");
    printf("\n4. Exit");
    printf("\nEnter your choice:");
    scanf("%d",&ch);
}

void Qinsert()
{
    int item;
    if(rear==max-1)
    {
        printf("\nQ is full");
    }
    else
    {
        printf("\nEnter value:");
        scanf("%d",&item);
        if(front==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
            rear++;
        }
        Q[rear]=item;
    }
}

void list()
{
    if(front==-1)
    {
        printf("\nQ is empty");
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            printf("\t %d",Q[i]);
        }
    }
}

void Qdelete()
{
    if(front==-1)
    {
        printf("\nUnderflow");
    }
    else
    {
        printf("\nDeleted item is:%d",Q[front]);
    
        if(front==rear)
        {
            front=rear=-1;
        }
        else
        {
            front++;
        }
    }    
}