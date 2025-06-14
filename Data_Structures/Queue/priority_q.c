#include<stdio.h>
#include<process.h>
#include<stdlib.h>

#define MAX 10

int PQ[MAX];
int front=-1,rear=-1;

void Insert_by_Priority(int);
void Delete_by_Priority();
void Display_PQ();
void Check(int);

void main()
{
    int n,ch;

    while(1)
    {
        printf("\n1. Insert an element into queue:");
        printf("\n2. Delete an element from queue:");
        printf("\n3. Display queue elements");
        printf("\n4. Exit");

        printf("\nEnter your choice:");
        scanf("%d",&ch);

        switch(ch)
        {
           case 1:
           printf("\nEnter value to be inserted:");
           scanf("%d",&n);
           Insert_by_Priority(n);
           break;
           case 2:
           Delete_by_Priority();
           break;
           case 3:
           Display_PQ();
           break;
           case 4:
           exit(0);
           default:
           printf("\nYour choice is incorrect, Enter correct choice...");
        }
    }
}

void Insert_by_Priority(int data)
{
    if(rear==MAX-1)
    {
        printf("\nQ Overflow");
    }
    else if((front == -1) && (rear==-1))
    {
        front++;
        rear++;
        PQ[rear]=data;
    }
    else
    {
        Check(data);
        rear++;
    } 
}

void Check(int data)
{
    int i,j;

    for (i=0;i<=rear;i++)
    {
        if(data > PQ[i])
        {
            for(j=rear+1;j>i;j--)
            {
                PQ[j] = PQ[j-1];
            }
            break;
        }
    }
    PQ[i] =  data;
}

void Display_PQ()
{
    if((front == -1) && (rear==-1))
    {
        printf("\nQ is empty");
        return;
    }
    for(int i=front;i<=rear;i++)
    {
        printf("\n%d",PQ[i]);
    }

}

void Delete_by_Priority()
{

    int i;
    if((front==-1) && (rear==-1))
    {
        printf("\nQ is empty");
        return;
    }

    printf("\nDelted item is=%d",PQ[front]);
    for(i=0;i<rear;i++)
    {
        PQ[i]=PQ[i+1];
    }
    rear--;
    if(rear == -1)
    {
        front=-1;
    }
}