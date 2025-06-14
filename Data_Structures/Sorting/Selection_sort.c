#include<stdio.h>

void main()
{
    int k[50],pass,n,min_index,i,temp;
    printf("\nEnter number of elements:");
    scanf("%d",&n);

    printf("\nEnter data:");
    for(i=0;i<n;i++)
    {
        printf("\nk[%d] = ",i);
        scanf("%d",&k[i]);
    }

    printf("\nDisplaying unsorted data:");
    for(i=0;i<n;i++)
    {
        printf("\nA[%d] = %d",i,k[i]);
    }

    for(pass=0;pass<n-1;pass++)
    {
        min_index = pass;
        for(i=pass+1;i<=n-1;i++)
        {
            if(k[i] < k[min_index]);
            {
                min_index = i;
            }
        }
        if(min_index != pass)
        {
            temp=k[pass];
            k[pass]=k[min_index];
            k[min_index]=temp;
        }
    }

printf("\nDisplaying sorted data:");
    for(i=0;i<n;i++)
    {
        printf("\nA[%d]=%d",i,k[i]);
    }
}