#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;


NODE* Getnode();
void Display_forwd(NODE*);
void Display_backwd(NODE*);
NODE* Insert_first(NODE*);
NODE* Insert_last(NODE*);
NODE* Search(NODE*, int);
NODE* Insert_before(NODE*,NODE*);
NODE* Delete_first(NODE*);
NODE* Delete_last(NODE*);
NODE* Insert_after(NODE*);
NODE* Del_any(NODE*);
void main()
{
    NODE *left=NULL, *right=NULL, *newnode;
    char ans;
    int value;
    while(1)
    {
        printf("\nDo you want to create a newnode?");
        fflush(stdin);
        scanf("%c",&ans);
        if(toupper(ans)=='N')
        {
            break;
        }
        else
        {
            newnode=Getnode();
            if(right==NULL) //empty linked lst
            {
                right=newnode;
                left=newnode;
            }
            else
            {
                right->next=newnode;
                newnode->prev=right;
                right=newnode;

            }
        }//END OF ELSE
    }//END OF WHILE

    printf("\n\n Displaying forward:");
    Display_forwd(left);
    printf("\n\n Displaying backward:");
    Display_backwd(right);
    printf("\n Insert first operation:");
    left=Insert_first(left);
    printf("\n\n Displaying after Insert first:");
    Display_forwd(left);
    printf("\n Insert last operation:");
    right=Insert_last(right);
    printf("\n\n Displaying after Insert last:");
    Display_forwd(left);*/
    printf("\nSearch operation:");
    printf("\nEnter info to search:");
    scanf("%d",&value);
    if (Search(right,value) == NULL)
    {
        printf("\nNode not found...try again...");
    }
    else
    {
        printf("\nNode Found");
    }
    printf("\nInsert before function:");
    left=Insert_before(left,right);
    printf("\n\n Displaying forward:");
    Display_forwd(left);
    printf("\n\n Displaying backward:");
    Display_backwd(right);
    printf("\nDelete first function:");
    left=Delete_first(left);
    if(left == NULL)
    {
        right = NULL;
        printf("\nEmpty linked list");
    }
    else
    {
    printf("\n\n Displaying forward:");
    Display_forwd(left);
    printf("\n\n Displaying backward:");
    Display_backwd(right);
    }
    printf("\nDelete last function:");
    right=Delete_last(right);
    if(right == NULL)
    {
        left = NULL;
        printf("\nEmpty linked list");
    }
    else
    {
    printf("\n\n Displaying forward:");
    Display_forwd(left);
    printf("\n\n Displaying backward:");
    Display_backwd(right);
    }
    
    printf("\nInsert after function:");
    right=Insert_after(right);
    if(right == NULL)
    {
         printf("\nNODE NOT FOUND");
    }
    else
    {
    printf("\n\n Displaying forward:");
    Display_forwd(left);
    printf("\n\n Displaying backward:");
    Display_backwd(right);
    }*/
    printf("\nDelete Any Operation....\n");
    NODE *rmnode;
    rmnode=Del_any(right);
    if(rmnode == NULL)
    {
        left=NULL;
        right=NULL;
    }
    else if (rmnode->prev ==NULL && rmnode->next == NULL)
    {
        left=rmnode;
        right=rmnode;
    }
    else if (rmnode->prev == NULL)
    {
        left=rmnode;
    }
    else if (rmnode->next==NULL)
    {
        right=rmnode;
    }
    if(rmnode==NULL)
    {
        printf("\nEmpty linked list");
    }
    else
    {
    printf("\n\n Displaying forward:");
    Display_forwd(left);
    printf("\n\n Displaying backward:");
    Display_backwd(right);
    }
}


NODE* Getnode()
{
    NODE *newnode;
    newnode = (NODE*) malloc(sizeof(NODE));
    newnode->prev=NULL;
    newnode->next=NULL;
    printf("\nEnter info:");
    scanf("%d",&newnode->info);
    return newnode; 
}

void Display_forwd(NODE* currptr)
{
    while(currptr)
    {
        printf("\n%d",currptr->info);
        currptr=currptr->next;
    }
}

void Display_backwd(NODE* currptr)
{
    while(currptr)
    {
        printf("\n%d",currptr->info);
        currptr=currptr->prev;
    }
}

NODE* Insert_first(NODE* currptr)
{
    NODE* newnode;
    newnode=Getnode();
    newnode->next=currptr;
    currptr->prev=newnode;
    return newnode;
}

NODE* Insert_last(NODE* currptr)
{
    NODE* newnode;
    newnode=Getnode();
    currptr->next=newnode;
    newnode->prev=currptr;
    currptr=newnode;
    return currptr;
}
NODE* Search(NODE* currptr, int val)
{
    while(currptr!=NULL)
    {
        if(currptr->info == val)
        {
            break; 
        }
        else
        {
        currptr=currptr->prev;
        }
    }
    return currptr;
}

NODE* Insert_before(NODE* left, NODE* currptr)
{
    int val;
    NODE* location,*newnode;
    printf("\n\nEnter info before which you want to insert:");
    scanf("%d",&val);
    location= Search(currptr,val);
    if(location == NULL)
    {
        printf("\nNode not found");
    }
    else
    {
        newnode=Getnode();
        if(location->prev == NULL)
        {
            newnode->next=location;
            location->prev=newnode;
            left=newnode;
        }
        else
        {
            location->prev->next=newnode;
            newnode->prev=location->prev;
            newnode->next=location;
            location->prev=newnode;
        }
    }
    return left;
}

NODE* Delete_first(NODE* currptr)
{
    NODE* rmnode;
    rmnode=currptr;
    if(currptr->next == NULL)
    {
        free(rmnode);
        return NULL;
    }
    else
    {
        currptr=currptr->next;
        currptr->prev=NULL;
        rmnode->next=NULL;
        free(rmnode);
        return currptr;   
    }

}
NODE* Delete_last(NODE* currptr)
{
    NODE* rmnode;
    rmnode=currptr;
    if(currptr->prev == NULL)
    {
        free(rmnode);
        return NULL;
    }   
    else
    {
        currptr=currptr->prev;
        currptr->next=NULL;
        rmnode->prev= NULL;
        free(rmnode);
        return currptr;
    }
}

NODE* Insert_after(NODE* currptr)
{
    int s;
    NODE* newnode, *start;
    newnode=Getnode();
    start=currptr;
    printf("\nEnter info of node after which you want to insert another node:");
    scanf("%d",&s);
    if(currptr->info == s)
        {
            currptr->next=newnode;
            newnode->prev=currptr;
            newnode->next=NULL;
            currptr=newnode;
            return currptr;
        }   
    else
    {
        currptr=currptr->prev;
        while (currptr != NULL)
        {
            if(currptr->info == s)
            {
                newnode->next=currptr->next;
                currptr->next->prev=newnode;
                currptr->next=newnode;
                newnode->prev=currptr;
                return start;
                break;
            }
            else
            {
                currptr=currptr->prev;
            }
        }
        
    }
    if(currptr == NULL)
    {
        return NULL;
    }
    
}

NODE* Del_any(NODE* currptr)
{
    NODE* first,*rmnode;
    int item;
    printf("\nEnter node info to delete:");
    scanf("%d",&item);
    first=currptr;
    currptr=Search(currptr,item);
    if(currptr !=NULL)
    {
        //DELETING WHEN THERE IS ONLY ONE NODE
        if(currptr->next == NULL && currptr->prev == NULL)
        {
            rmnode=currptr;
            first =NULL;
            free(rmnode);
        }
        // deleting first node
        else if(currptr->prev == NULL)
        {
            rmnode=currptr;
            currptr=currptr->next;
            first=currptr;
            currptr->prev=NULL;
            rmnode->next=NULL;
            free(rmnode);
        }
        else if (currptr->next == NULL)
        {
            rmnode=currptr;
            currptr=currptr->prev;
            first=currptr;
            currptr->next=NULL;
            rmnode->prev=NULL;
            free (rmnode);
        }
        else //delte in between node
        {
            rmnode=currptr;
            currptr=currptr->next;
            currptr->prev=rmnode->prev;
            rmnode->prev->next=currptr;
            rmnode->next=NULL;
            rmnode->prev=NULL;
            free(rmnode);
        }
        
    }
    return first;
}