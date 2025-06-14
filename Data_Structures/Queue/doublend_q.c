#include<stdio.h>
#define max 5

int DQ[max];
int left =-1, right=-1;

void Insert_right(void);
void Insert_left(void);
void Delete_right(void);
void Delete_left(void);
void Display(void);

int main()
{
    int ch;
    do
    {
        printf("\n1. Insert at right");
        printf("\n2. Insert at left");
        printf("\n3. Delete from right");
        printf("\n4. Delete from left");
        printf("\n5. Display");
        printf("\nEnter your choice");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
            Insert_right();
            break;
            case 2:
            Insert_left();
            break;
            case 3:
            Delete_left();
            break;
            case 4:
            Delete_right();
            break;
            case 5:
            Display();
            break;
        }
    }
    while(ch!=6);
}

void Insert_right()
{
    int val;
    if((left == 0 && right == max-1) || (left == right+1))
    {
        printf("\nOverflow");
    }
    else
    {
        printf("\nEnter val to be added:");
        scanf("%d",&val);
        if(left == -1)
        {
            left=0;
            right=0;
        }
        else
        {
            if(right == max-1)
            {
                right=0;
            }
            else
            {
                right=right+1;
            }
        }
        DQ[right]=val;
    }
}

void Insert_left()
{
    int val;
    if((left == 0 && right == max-1)|| (left ==  right+1))
    {
        printf("\nOverflow");
    }
    else
    {
        printf("\nEnter val to be added:");
        scanf("%d",&val);
        if(left==-1)
        {
            left=0;
            right=0;
        }
        else
        {
            if(left == 0)
            {
                left=max-1;
            }
            else
            {
                left=left-1;
            }
        }
        DQ[left]=val;
    }
}

void Display()
{
    int front=left, rear=right;
    if(front == -1)
    {
        printf("\nQueue is empty");
    }
    printf("\nElements in DQ are:");
    if(front <= rear)
    {
        while( front <= rear)
        {
        printf("\n%d",DQ[front]);
        front++;
        }
    }
    else
    {
        while(front<=max-1)
        {
            printf("\n%d",DQ[front]);
            front++;
        }
        front=0;
        while(front<=rear)
        {
            printf("\n%d",DQ[front]);
            front++;
        }
    }
}

void Delete_right()
{
    if(left == -1)
    {
        printf("\nUnderflow");
    }
    printf("\nThe deleted el is:%d",DQ[right]);
    if(left == right)
    {
        left =-1;
        right=-1;
    }
    else
    {
        if(right == 0)
        {
            right = max-1;
        }
        else
        {
            right=right-1;
        }
    }
}

void Delete_left()
{
    if(left == -1)
    {
        printf("\nUnderflow");
    }
    printf("\nThe deleted el is:%d",DQ[left]);
    if(left == right)
    {
        left =-1;
        right=-1;
    }
    else
    {
        if(left == max-1)
        {
            left = 0;
        }
        else
        {
            left=left+1;
        }
    }
}