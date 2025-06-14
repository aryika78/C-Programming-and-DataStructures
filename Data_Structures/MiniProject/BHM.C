#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
# define max_url 100
# define max_size 30
struct node
{
    char url[max_url];
    struct node* next;
    struct node* prev;
};
typedef struct node Node;
Node* Pushurl(Node*);
Node* Popurl(Node*);
void List(Node*);
void Searchurl(Node*);
Node* Navigation(Node*);
Node* top;
Node* nav;
int size=0;
void main()
{
    int ch;
    Node* lastnav;
    top=NULL;
    clrscr();

    do
    {
    {
    printf("\nData Structures - 202040301\n");
    printf("Developed by:-ARYIKA PATNI\n\n");
    printf("\n\n***BROWSER HISTORY MANAGER***");
    printf("\n1. TO ENTER NEW URL");
    printf("\n2. TO DELETE URL");
    printf("\n3. TO SHOW ALL PREVIOUS URLS");
    printf("\n4. TO SEARCH URL");
    printf("\n5. TO NAVIGATE FORWARD OR BACKWARD");
    printf("\n6. TO EXIT");
    printf("\n\nEnter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
	case 1: system("cls");
		top=Pushurl(top);
		lastnav=top;
		printf("\nPRESS ANY KEY TO CONTINUE\n");
		getch();
		system("cls");
	break;
	case 2: system("cls");
		top=Popurl(top);
		lastnav=top;
		printf("\nPRESS ANY KEY TO CONTINUE\n");
		getch();
		system("cls");
	break;
	case 3: system("cls");
		List(top);
		printf("\nPRESS ANY KEY TO CONTINUE\n");
		getch();
		system("cls");
	break;
	case 4: system("cls");
		Searchurl(top);
		printf("\nPRESS ANY KEY TO CONTINUE\n");
		getch();
		system("cls");
	break;
	case 5: system("cls");
		lastnav=Navigation(lastnav);
		printf("\nPRESS ANY KEY TO CONTINUE\n");
		getch();
		system("cls");
	break;
	case 6:exit(0);
    }
    }
    }while(ch!=7);
}
Node* Getnode()
{
    Node* newnode;
    newnode=(Node*)malloc(sizeof(Node));
    return newnode;
}

Node* Pushurl(Node* top)
{
    int flag;
    if(size<max_size)
    {
	int i;
	Node* newnode;
	newnode=Getnode();
	printf("\nEnter URL:");
	fflush(stdin);
	gets(newnode->url);
	if(newnode->url[0]=='w'&& newnode->url[1]=='w'&& newnode->url[2]=='w'&& newnode->url[3]=='.')
	{
	    for(i=5;i<strlen(newnode->url)-2;i++)
	    {
		if(newnode->url[i]=='.')
		{
		    flag=1;
		    break;
		}
		else
		{
		    flag=0;
		}
	    }
	}
	else
	{
	    flag=0;
	}
	if(flag==1)
	{
	    if(size==0)
	    {
	    newnode->prev=top;
	    newnode->next=NULL;
	    top=newnode;
	    size++;
	    return top;
	    }
	    else
	    {
	    newnode->prev=top;
	    newnode->next=NULL;
	    top->next=newnode;
	    top=newnode;
	    size++;
	    return top;
	    }
	}
	else
	{
	    printf("\nInvalid URL..");
	    return NULL;
	}
    }
    else
    {
	printf("\nNo more URL can be entered...");
	return NULL;
    }
}

Node* Popurl(Node* top)
{
    Node* rmnode;
    if(size==0)
    {
        printf("\nNO URL ADDED");
        return NULL;
    }
    else
    {
        printf("\nDeleted URL:");
        puts(top->url);
        rmnode=top;
        top=top->prev;
        top->next=NULL;
        free(rmnode);
        size--;
        return top;
    }
}
 
void List(Node* top)
{
    if(size==0)
    {
       printf("\nNO URL ADDED"); 
    }
    else
    {
        while(top!= NULL)
        {
            printf("\n");
            puts(top->url);
            top=top->prev;
        }
    }
}

void Searchurl(Node* top)
{
    char sr[100];
    int i,flag;
    printf("\nEnter URL which you want to search:");
    fflush(stdin);
    gets(sr);
    for(i=1;i<=size;i++)
    {
        if(strcmp(sr,top->url)==0)
        {
            flag=1;
            break;
        }
        else
        {
            flag=0;
        }
        top=top->prev;
    }

    if(flag==1)
    {
        printf("\nURL Found:");
        puts(sr);
    }
    else
    {
        printf("\nURL not found..");
    }

}

Node* Navigation(Node* nav)
{
    char ch;
    if(top==NULL)
    {
        printf("\nNO URL ADDED");
    }
    else
    {
    printf("\nEnter F for Forward Navigation and B for Backward Navigation:");
    fflush(stdin);
    scanf("%c",&ch);
    printf("\nThe current url is:");
    printf("\n");
    puts(nav->url);
    if(toupper(ch)=='B')
    {
        if(nav->prev==NULL)
        {
            printf("\nWe cannot navigate any backward");
        }
        else
        {
            nav=nav->prev;
            printf("\n");
            puts(nav->url);
        }
    }
    else if(toupper(ch)=='F')
    {
        if(nav->next==NULL)
        {
             printf("\nWe cannot navigate any further");
        }
        else
        {
            nav=nav->next;
            printf("\n");
            puts(nav->url);
        }
    }
    }
    return nav;
}