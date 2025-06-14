#include<stdio.h>
#include<stdlib.h>
struct Tree_node
{
    char info;
    struct Tree_node *llink;
    struct Tree_node *rlink;
};

typedef struct Tree_node NODE;

NODE* Getnode()
{
    NODE* newnode;
    char item;
    printf("\nEnter info:");
    fflush(stdin);
    scanf("%c",&item);
    if(item=='#')
        return NULL;
    newnode = (NODE*) malloc(sizeof(NODE));
    newnode->info = item;
    newnode->llink=NULL;
    newnode->rlink=NULL;
    return newnode;
}

NODE* Create(NODE* currptr)
{
    currptr=Getnode();
    if(currptr==NULL)
    {
        return currptr;
    }
    printf("\nEnter info for left of %c",currptr->info);
    currptr->llink=Create(currptr->llink);
    printf("\nEnter info to the right of %c",currptr->info);
    currptr->rlink=Create(currptr->rlink);
    return currptr;
}

void Preorder(NODE* currptr)
{
    if(currptr != NULL)
    {
        printf("%c",currptr->info);
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
        printf("%c",currptr->info);
    }
}

void Inorder(NODE* currptr)
{
    if(currptr != NULL)
    {
       
        Preorder(currptr->llink);
        printf("%c",currptr->info);
        Preorder(currptr->llink);
    }
}

void main()
{
    int ele,i,n;
    NODE *root;
    root = NULL;
    printf("\nLET's create a Binary Tree....\n");
    root = Create(root);
    printf("\nTravarsal of a binary tree");
    printf("\nPreorder Traversal");
    Preorder(root);
    printf("\nPostorder Traversal");
    Postorder(root);
    printf("\nInorder Traversal");
    Inorder(root);
}