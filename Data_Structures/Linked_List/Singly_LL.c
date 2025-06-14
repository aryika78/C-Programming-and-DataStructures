#include<stdio.h>
#include<stdlib.h> // for malloc
#include<ctype.h> // for toupper

struct node
{
    int info;
    struct node *link;
};

typedef struct node NODE;
void Create_link_list(NODE*);
void Display(NODE*);
int Count(NODE*);
int Largest(NODE*);
NODE* Insert_first(NODE*);
NODE* Getnode();
void Insert_last(NODE*);
NODE* Search(NODE*,int);
void Insert_after(NODE*);
NODE* Insord(NODE*);
NODE* Delete_first(NODE*);
NODE* Delete_last(NODE*);
NODE* Delete_any(NODE*);
NODE* Insert_before(NODE*);
NODE* Copy(NODE*);
void main()
{
    NODE *head,*found;
    int cnt,search_item;
    head=(NODE*)malloc(sizeof(NODE));//return type of malloc is void*
    Create_link_list(head);
    Display(head);
    cnt=Count(head);
    printf("\n\nCOUNT=%d",cnt);
    printf("\n\nLargest value in Linked list is=%d",Largest(head));
    printf("\nInsert first operation : ");
    head=Insert_first(head);
    printf("\nDisplay after insert first operation:");
    Display(head);
    printf("\nInsert last operation : ");
    Insert_last(head);
    printf("\nDisplay after insert last operation:");
    Display(head);
    printf("\n\n Search operation:");
    printf("\n Enter node info to search:");
    scanf("%d",&search_item);
    found=Search(head,search_item);
    {
        if (found==NULL)
        {
            printf("\n Node not found.. try again..");
        }
        else
        {
            printf("\n Node found...");
        }
    }
    printf("\nInsert after operation : ");
    Insert_after(head);
    printf("\nDisplay after insert AFTER operation:");
    Display(head);*/    
    printf("\nInsert ORDER operation : ");
    head = Insord (head);
    printf("\nDisplay after insert ORDER operation:");
    Display(head);*/ 
    printf("\n\n Delete first operation:");
    head=Delete_first(head);
    if(head == NULL)
    {
        printf("\n Empty Linked list");
    }
    else
    {
        printf("\nDisplay after delete first:");
        Display(head);
    }   
    printf("\n\n Delete LAST operation:");
    head=Delete_last(head);
    if(head == NULL)
    {
        printf("\n Empty Linked list");
    }
    else
    {
        printf("\nDisplay after delete last:");
        Display(head);
    }
    printf("\n\n Delete ANY operation:");
    head=Delete_any(head);
    if(head == NULL)
    {
        printf("\n Empty Linked list");
    }
    else
    {
        printf("\nDisplay after delete any operation:");
        Display(head);
    }
    printf("\nInsert before operation : ");
    head=Insert_before(head);
    if(head == NULL)
    {
        printf("\n\nNODE NOT FOUND");
    }
    else
    {
        printf("\nDisplay after insert before operation:");
        Display(head);
    }*/
    printf("\n\nCopy linked list operation:");
    head=Copy(head);
    Display(head);
 }

void Create_link_list(NODE* currptr)
{
    NODE *newnode;
    char ans;
    while(1)
    {
    printf("Enter Info:");
    scanf("%d",&currptr->info);
    printf("Do you want to continue:");
    fflush(stdin);
    scanf("%c",&ans);
    if(toupper(ans)=='Y')
    {
        newnode=(NODE*)malloc(sizeof(NODE));
        currptr->link=newnode;
        currptr=newnode;
    }
    else
    {
        currptr->link=NULL;
        break;
    }
    }
}

void Display(NODE* currptr)
{
    while(currptr!=NULL)
    {
        printf("  %d",currptr->info);
        currptr=currptr->link;
    }
}

int Count(NODE* currptr)
{
    int c=0;
    while(currptr!=NULL)
    {
        c++;
        currptr=currptr->link;
    }
    return c;
}

int Largest (NODE* currptr)
{
    int m;
    m=currptr->info;
    while(currptr!=NULL)
    {
        if(currptr->info > m)
        {
            m=currptr->info;
        }
        currptr=currptr->link;
    }
    return m;
}
NODE* Getnode()
{
    NODE* newnode;
    newnode=(NODE*)malloc(sizeof(NODE));
    printf("\n\n Enter info:");
    scanf("%d",&newnode->info);
    return newnode;
}

NODE* Insert_first(NODE* currptr)
{
    NODE* newnode;
    newnode=Getnode();
    newnode->link=currptr;
    currptr=newnode;
    return currptr;
}

void Insert_last (NODE* currptr)
{
    NODE* newnode;
    newnode=Getnode();
    while(currptr->link!=NULL)
    {
        currptr=currptr->link;
    }
    currptr->link=newnode;
    newnode->link=NULL;
}
NODE* Search(NODE* currptr, int a)
{
    while(currptr!=NULL)
    {
        if(currptr->info==a)
        {
            return currptr;
            break;
        }
        currptr=currptr->link;
    }
    return NULL;
}

void Insert_after(NODE* currptr)
{
    int n;
    NODE* newnode,*location;
    printf("\n Enter node after which you want to insert:");
    scanf("%d",&n);
    location=Search(currptr,n);
    if(location==NULL)
    {
        printf("\nNahi mila..");
    }
    else
    {
        newnode=Getnode();
        newnode->link=location->link;
        location->link=newnode;
    }
}

NODE* Insord (NODE* currptr)
{
    NODE* newnode, *temp, *start;
    char a;
    start=currptr;
    while(1)
    {
            printf("\n\nDo you want to continue?");
            scanf(" %c",&a);
            if(toupper(a)=='Y')
            {
                newnode=Getnode();
                currptr=start;

                    if(newnode->info <= currptr->info)
                    {
                        newnode->link=currptr;
                        start=newnode;
                    }
                    else
                    {
        
                        while (currptr->link!=NULL)
                        {
                            temp=currptr;
                            currptr=currptr->link;
                                if(currptr->info >= newnode->info)
                                {
                                temp->link=newnode;
                                newnode->link=currptr;
                                break;
                                }
                        }

                        if(newnode->info > currptr->info)
                        {
                        currptr->link=newnode;
                        newnode->link=NULL;
                        }


    
                    }
            }
            else
            {
                break;
            }
   
    }
    return start;

}

NODE* Delete_first(NODE* currptr)
{
    NODE* temp;
    temp=currptr;
    currptr=currptr->link;
    free(temp);
    return currptr;
    //OR
    //currptr=currptr->link;
    //return currptr;
    //or
    // return currptr->link;
}

NODE* Delete_last(NODE* currptr)
{
    NODE* temp, *mynode;
    mynode=currptr;
    if(currptr->link == NULL)
    {
        temp=currptr;
        mynode = NULL;
    }
    else
    {
        while(currptr->link->link != NULL)
        {
            currptr=currptr->link;
        }
        temp=currptr->link;
        currptr->link=NULL;
    }
    free(temp);
    return mynode;
}

NODE* Delete_any(NODE* currptr)
{
    NODE* temp, *rmnode;
    int item;
    temp=currptr;
    if(currptr!=NULL)
    {
        printf("\nEnter node info you want to delete:");
        scanf("%d",&item);
        if(currptr->info==item)
        {
            temp = currptr->link;
            free(currptr);
        }
        else
        {
            while(currptr!=NULL)
            {
                if(currptr->link->info == item)
                {
                    rmnode=currptr->link;
                    currptr->link=currptr->link->link;
                    free(rmnode);
                    break;
                }
                currptr=currptr->link;
            }
            if(currptr == NULL)
            {
                printf("Node does not exist.. Try again..");
            }
        }
    }
    return temp;
}

NODE* Insert_before (NODE* currptr)
{
    NODE* newnode,*head,*pred;
    head=currptr;
    newnode=Getnode();
    int s;
    printf("\n\nEnter the info of node before which you want to insert node:");
    scanf("%d",&s);
    if(currptr->info == s)
    {
        newnode->link=currptr;
        return newnode;
    }
    else
    {
    while(currptr->link->link!=NULL && currptr->link->info!=s)
    {
        currptr=currptr->link;
    }
    if(currptr->link->info == s)
    {
        newnode->link=currptr->link;
        currptr->link=newnode;
        return head;
    }
    else if (currptr->link->link == NULL)
    {
        return NULL;
    }
    }
}

NODE* Copy(NODE* currptr)
{
    if(currptr->link == NULL)
    {
        NODE* newnode;
        newnode=(NODE*)malloc(sizeof(NODE));
        newnode->info=currptr->info;
        newnode->link=NULL;
        return newnode;
    }
    else
    {
    NODE* newnode,*prev,*head;
    newnode=(NODE*)malloc(sizeof(NODE));
    newnode->info=currptr->info;
    prev=newnode;
    currptr=currptr->link;
    head=newnode;
    while (currptr != NULL)
    {
        NODE* newnode;
        newnode=(NODE*)malloc(sizeof(NODE));
        newnode->info=currptr->info;
        prev->link=newnode;
        newnode->link=NULL;
        prev=newnode;
        currptr=currptr->link;
    }
    return head;
    }    
}