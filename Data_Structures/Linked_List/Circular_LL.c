#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

struct node
{
    int info;
    struct node *link;
};
typedef struct node NODE;

void Create_circular_list(NODE*);
void Display(NODE*);
NODE* Insert_first(NODE*);
void Insert_last(NODE*);
NODE* Getnode();
NODE* Delete_first(NODE*);
void Delete_last(NODE*);

void main()
{
    NODE *head;
    head=(NODE*) malloc (sizeof(NODE));
    printf("\nLinked list creation...");
    Create_circular_list(head);
    printf("\nDisplay CLL...");
    Display(head);
    printf("\nInsert first operation:");
    head=Insert_first(head);
    printf("\nDisplay after insert first..");
    Display(head);
    printf("\nInsert last operation:");
    Insert_last(head);
    printf("\nDisplay after insert last..");
    Display(head);
    printf("\nDelete first operation:");
    head=Delete_first(head);
    printf("\nDisplay after delete first..");
    Display(head);
    printf("\nDelete last operation:");
    Delete_last(head);
    printf("\nDisplay after delete last..");
    Display(head);
}

void Create_circular_list(NODE* currptr)
{
    NODE* newnode,*first;
    char ans;
    first=currptr;
    while(1)
    {
        printf("\nEnter info:");
        scanf("%d",&currptr->info);
        printf("\nDo you wish to continue");
        fflush(stdin);
        scanf("%c",&ans);
        if (toupper(ans)== 'Y')
        {
            newnode=(NODE*) malloc (sizeof(NODE));
            currptr->link=newnode;
            currptr=newnode;
        }
        else
        {
            currptr->link=first;
            break;
        }
    }// end of while
}

void Display(NODE* currptr)
{
    NODE* first;
    if(currptr != NULL)
    {
        first=currptr;
        do
        {
            printf("\n%d",currptr->info);
            currptr=currptr->link;
        } while (currptr!=first);
    }
}
NODE* Getnode()
{
    NODE* newnode;
    newnode=(NODE*)malloc(sizeof(NODE));
    printf("\nEnter info:");
    scanf("%d",&newnode->info);
    return newnode;
}

NODE* Insert_first(NODE* currptr)
{
    NODE* newnode, *oldfirst;
    newnode=Getnode();
    oldfirst=currptr;
    newnode->link=currptr;
    while(currptr->link != oldfirst)
    {
        currptr=currptr->link;
    }
    currptr->link=newnode;
    return newnode;
}
void Insert_last(NODE* currptr)
{
    NODE* newnode,*first;
    newnode=Getnode();
    first=currptr;
    while(currptr->link != first)
    {
        currptr=currptr->link;
    }
    currptr->link=newnode;
    newnode->link=first;
}

NODE* Delete_first(NODE* currptr)
{
    NODE *newfirst,*oldfirst;
    oldfirst=currptr;
    currptr=currptr->link;
    newfirst=currptr;
    while(currptr->link != oldfirst)
    {
        currptr=currptr->link;
    }
    currptr->link=newfirst;
    return newfirst;
}

void Delete_last(NODE* currptr)
{
    NODE* first;
    first=currptr;
    while(currptr->link->link!=first)
    {
        currptr=currptr->link;
    }
    currptr->link=first;
}