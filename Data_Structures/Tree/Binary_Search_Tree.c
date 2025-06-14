#include<stdio.h>
#include<stdlib.h>

struct Tree_Node
{
    int info;
    struct Tree_Node *llink;
    struct Tree_Node *rlink;
};

typedef struct Tree_Node NODE;

NODE *root;

void Create (int item)
{
    NODE *newnode,*currptr,*ptr;
    newnode=(NODE*)malloc(sizeof(NODE));
    newnode->info=item;
    newnode->llink=NULL;
    newnode->rlink=NULL;

    if(root==NULL)
    {
        root=newnode;
    }
    else
    {
        currptr=root;
        while(currptr!=NULL)
        {
            ptr=currptr;
            if(newnode->info > currptr->info)
            {
                currptr=currptr->rlink;
            }
            else
            {
                currptr=currptr->llink;
            }
        } // end of while

        if(ptr->info < newnode->info)
        {
            ptr->rlink=newnode;
        }  
        else
        {
            ptr->llink=newnode;
        }
    }
}

void Preorder(NODE* currptr)
{
    if(currptr != NULL)
    {
        printf("%d",currptr->info);
        Preorder(currptr->llink);
        Preorder(currptr->llink);
    }
}

void Postorder(NODE* currptr)
{
    if(currptr != NULL)
    {
        
        Preorder(currptr->llink);
        Preorder(currptr->llink);
        printf("%d",currptr->info);
    }
}

void Inorder(NODE* currptr)
{
    if(currptr != NULL)
    {
       
        Preorder(currptr->llink);
        printf("%d",currptr->info);
        Preorder(currptr->llink);
    }
}

void main()
{
    int n,i,ele;
    root=NULL;
    printf("\nPlease enter number of nodes:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter data for the node:");
        scanf("%d",&ele);
        Create(ele);
    }
    printf("\nBinary Search Tree Traversal");
    printf("\nPreorder Traversal");
    Preorder(root);
    printf("\nInorder Traversal");
    Inorder(root);
    printf("\nPostorder Traversal");
    Postorder(root);
}