//ins sort 

#include<stdio.h>

int main()
{
    int n,i,temp,j;
    printf("\nEnter n for array");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }

    printf("\nSorted array:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    } 
}