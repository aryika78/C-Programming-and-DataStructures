//COMPACT COMPUTER INSTITUTE -  AMIT SIR
#include <stdio.h>
#include <conio.h>
#include <alloc.h>
#include "stdbool.cpp"


/*Tree node structure */

struct Tree_Node
{
	int info;
	struct Tree_Node *llink;
	struct Tree_Node *rlink;
// True if left pointer points to //predecessorin Inorder Traversal
		  bool lthread;
// True if right pointer points to //successor in Inorder Traversal
		  bool rthread;
};
typedef Tree_Node NODE;

NODE *root;

/*Function to create binary search tree */

void Create(int item)
{
NODE *NewNode,*CurrPtr,*Ptr;
NewNode = (NODE*) malloc (sizeof(NODE));
NewNode->info = item;
NewNode->llink=NULL;
NewNode->rlink=NULL;
NewNode->lthread = true;
NewNode->rthread = true;
//true means ==> threaded link
//false means ==> solid link


if(root==NULL)
	root=NewNode;
else
{
	CurrPtr=root;
	while(CurrPtr!=NULL)
	{
	Ptr=CurrPtr;
if (NewNode->info>CurrPtr->info)
{
		 if (CurrPtr->rthread == false)	                         CurrPtr=CurrPtr->rlink;
		else
	     break;
}
else
{
		 if (CurrPtr->lthread == false)
	       CurrPtr=CurrPtr->llink;
                 else			
	        break;		
}
} //end of while

if(Ptr->info<NewNode->info)
{
    NewNode->llink = Ptr;            	       NewNode->rlink = Ptr->rlink;   	
   Ptr->rlink=NewNode;
   Ptr->rthread = false;
}                
else
{
     NewNode->llink = Ptr->llink;  
     NewNode->rlink = Ptr;           
     Ptr->llink=NewNode;
     Ptr->lthread = false;              
}
} //end of else
}


void Inorder(NODE *Ptr)
{
if (Ptr != NULL)
{
     while (Ptr -> lthread == false)
     {
	Ptr = Ptr->llink;
      }
}
while (Ptr!=NULL)
{
printf("%d\t",Ptr->info);	/*Process the root	*/
Ptr = InorderSuccessor(Ptr);
}
}

// Returns inorder successor using rthread 
NODE *inorderSuccessor(NODE *ptr) 
{ 
// If rthread is set, we can quickly find 
if (ptr -> rthread == true) 
	return ptr->rlink; 
// Else return leftmost child of right subtree 
ptr = ptr -> rlink; 
while (ptr -> lthread == false) 
	ptr = ptr -> llink; 
return ptr; 
} 


void main()
{
int ele,i,n;
root =NULL;
printf("Enter Number of nodes\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("Enter the data for 			the node\n");
	scanf("%d",&ele);
	Create(ele);
}
printf("The Threaded binary Search tree is \n");
printf("\nInorder traversal \n");
Inorder(root);
getch();
}
