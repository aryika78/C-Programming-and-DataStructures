#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

struct node
{
    int info;
    struct node* link;
};

typedef struct node NODE;

NODE* insertorder(NODE*);

NODE* getnode();

void display(NODE*);

void copy(NODE*); 

NODE* gn();

void dspl(NODE*);

NODE* rev(NODE*);

void dsprev(NODE*);

void main()
{
    NODE* head;
    char ans;
    head=(NODE*)malloc(sizeof(NODE));

    printf("ENTER INFO:");
    scanf("%d",&head->info);
    head->link = NULL;

    while (1)
{   
    printf("\nDO YOU WANT TO CONTINUE?");
    fflush(stdin);
    scanf("%c",&ans);

    if(toupper(ans)=='Y')
    {

    head=insertorder(head);
    display(head);
        }
    else
    {
        break;
    }
}

    copy(head);
    dspl(head);

    head=rev(head);
    dsprev(head);
}

NODE* getnode()
{
    NODE* newnode;
    newnode=(NODE*)malloc(sizeof(NODE));
    printf("\n\nENTER INFO:");
    scanf("%d",&newnode->info);
    return newnode;
}

void display(NODE* currptr)
{
     printf("\n ORIGINAL LIST:");
    while (currptr!=NULL)
    {
    printf("\n%d",currptr->info);
    currptr=currptr->link;
    }
}

void dspl(NODE* currptr)
{
    printf("\n COPIED LIST:");
   while (currptr!=NULL)
    {
    printf("\n%d",currptr->info);
    currptr=currptr->link;
    }  
}
void dsprev(NODE* currptr)
{
     printf("\n REVERSED LIST:");
    while (currptr!=NULL)
    {
    printf("\n%d",currptr->info);
    currptr=currptr->link;
    }
}

NODE* insertorder(NODE* currptr)
{
    NODE* newnode,*top;
    char ans;
    top=currptr;
        newnode=getnode();

        if(newnode->info<top->info)  //insert before first node
        {
            newnode->link=top;
            // top->link=NULL;
            top=newnode;
            currptr=newnode;
            return top;
        }
        else
        {
            while (currptr!=NULL)
            {
                if (currptr->link!=NULL)
                {    
                   if(newnode->info<currptr->link->info)
                    {
                        newnode->link=currptr->link;
                        currptr->link=newnode;
                        return top;
                    }
                        currptr=currptr->link;
                }
                else if (currptr->info<newnode->info)
                {
                    currptr->link=newnode;
                    newnode->link=NULL;
                    return top;
                }
                
            }
            
        }
}

NODE* gn()
{
    NODE* newnode;
    newnode=(NODE*)malloc(sizeof(NODE));
    return newnode;
}

void copy(NODE* currptr)
{
    while(currptr!=NULL)
    {
        NODE* newnode;
        newnode=gn();
        newnode->info=currptr->info;
        currptr=currptr->link;
    }
}

NODE* rev(NODE* currptr)
{
NODE* first,*next;

        next=currptr->link;
        first=NULL;
        currptr->link=first;
    while(next!=NULL)
    {    
        first=currptr;
        currptr=next;
        next=next->link;
        currptr->link=first;
    }
    return currptr;
    
}