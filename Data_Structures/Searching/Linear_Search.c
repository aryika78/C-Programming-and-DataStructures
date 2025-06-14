#include<stdio.h>

int Linear_search(int [],int,int);

void main()
{
    int k[10],i,n,x,found;
    printf("\nEnter number of elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter number:");
        scanf("%d",&k[i]);
    }

printf("\nEnter value to Search:");
scanf("%d",&x);

found=Linear_search(k,n,x);
if(found==-1)
{
    printf("\nUnsuccesful search!!!");
}
else
{
    printf("\nSuccesful search, %d is at indx %d of array",x, found);
}
}

int Linear_search(int k[],int n, int x)
{
    int i=0;
    k[n]=x;
    while(k[i]!=x)
    {
        i++;
    }
    if(i == n)
    {
        return -1;
    }
}