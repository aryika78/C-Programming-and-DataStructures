//quick sort

#include<stdio.h>
int partition(int a[], int beg, int end)
{
    int left,right,loc,flag=0,temp;
    left=loc=beg;
    right=end;
    while(flag!=1)
    {
    while(a[loc]<=a[right] && loc!=right)
    {
        right--;
    }
    if(loc == right)
    {
        flag=1;
    }
    else if(a[loc]>a[right])
    {
        temp=a[loc];
        a[loc]=a[right];
        a[right]=temp;
        loc=right;
    }

    if(flag!=1)
    {
        while(a[loc]>=a[left] && loc!=left)
    {
        left++;
    }
    if(loc == left)
    {
        flag=1;
    }
    else if(a[loc]<a[left])
    {
        temp=a[loc];
        a[loc]=a[left];
        a[left]=temp;
        loc=left;
    }
    }
    }
    return loc;
}

void qs(int  a[], int beg, int end)
{
    int loc;
    if(beg<end)
    {
        loc=partition(a,beg,end);
        qs(a,beg,loc-1);
        qs(a,loc+1,end);
    }
} 
void main()
{
    int n,i;
    printf("\nEnter n for array");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    qs(a,0,n-1);

    printf("\nSorted array:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    } 
}