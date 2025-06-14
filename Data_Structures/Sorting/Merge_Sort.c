#include<stdio.h>
#define max 50
void merge(int a[], int beg, int mid, int end)
{
    int i=beg, j=mid+1, index=beg, temp[max],k;
    while(i<=mid && j<=end)
    {
        if(a[i]<a[j])
        {
            temp[index]=a[i];
            i++;
            index++;
        }
        else
        {
            temp[index]=a[j];
            j++;
            index++;
        }
    }

    if(i>mid)
    {
        while(j<=end)
        {
            temp[index]=a[j];
            j++;
            index++;
        }
    }
    else
    {
        while(i<=end)
        {
            temp[index]=a[i];
            i++;
            index++;
        }
    }

    for(k=beg;k<=end;k++)
    {
        a[k]=temp[k];
    }
}
void ms(int a[],int beg, int end)
{
    int mid;
    if(beg<end)
    {
        mid=(beg+end)/2;
        ms(a,beg,mid);
        ms(a,mid+1,end);
        merge(a,beg,mid,end);
    }
}
int main()
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

    ms(a,0,n-1);

    printf("\nSorted array:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    } 

}