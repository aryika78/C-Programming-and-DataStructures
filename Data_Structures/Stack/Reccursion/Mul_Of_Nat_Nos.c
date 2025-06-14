//What is recursion? Write a pseudocode in C language to find the multiplication of two natural numbers
#include<stdio.h>

int product(int,int);
void main()
{
    int a,b;
    printf("\nEnter first natural number:");
    scanf("%d",&a);
     printf("\nEnter fsecond natural number:");
    scanf("%d",&b);
    if(a>0 && b>0)
    {
        printf("\nThe product of two natural numbers is %d",product(a,b));
    }
    else
    {
        printf("\nPlease enter valid natural number");
    }
}

int product(int x,int y)
{
    if(y==0)
    {
        return 0;
    }
    else
    {
        return(x+product(x,y-1));
    }
}
/*
 return(5+ p(5,3)) ==> return(5+15) ==>20
 return(5+ p(5,2)) ==> return(5+10) ==>15
 return(5+ p(5,1)) ==> return(5+5) ==>10
 return(5+ p(5,0)) ==> return(5+0) ==>5
 return 0
*/