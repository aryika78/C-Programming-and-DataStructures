#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int CQ[MAX];
int front = -1, rear = -1, cnt = 0;
void CQInsert();
void CQDelete();
void List();
int Screen();

void main()
{
    int ch;
    while (1)
    {
        ch = Screen();
        switch (ch)
        {
        case 1:
            CQInsert();
            break;
        case 2:
            CQDelete();
            break;
        case 3:
            List();
            break;
        default:
            exit(0);
            break;
        }
    }
}

int Screen()
{
    int ch;
    printf("\nCircular Queue Operations:");
    printf("\n1. Insert");
    printf("\n2. Delete");
    printf("\n3. List");
    printf("\n4. Exit");
    printf("\nEnter your choice:");
    scanf("%d", &ch);
    return ch;
}

void CQInsert()
{
    int val;
    if (((front == 0) && (rear == MAX - 1)) || (front == rear + 1))
    {
        printf("\nCQ is full");
    }
    else
    {
        printf("\nEnter value to insert:");
        scanf("%d", &val);
        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else if (rear == MAX - 1) // Circular queue property
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        CQ[rear] = val;
        cnt++;
    }
}

void List()
{
    int i, c;
    if(front ==-1 || front == rear-1)
    {
        printf("\nQueue is empty:");
    }
    for (i = front, c = cnt; c != 0; c--)
    {
        printf("\n%d", CQ[i++]);
        if (i == MAX)
        {
            i = 0;
        }
    }
}

void CQDelete()
{
    if (front == -1)
    {
        printf("\nCQ is empty,undeflow");
    }
    else
    {
        printf("\nThe deleted element is : %d", CQ[front]);
        cnt--;
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (front == MAX - 1) // circular queue property
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }
}