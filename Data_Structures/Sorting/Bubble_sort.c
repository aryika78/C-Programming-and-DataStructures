#include<stdio.h>

void main()
{
    int k[50],last,n,pass,exchg,i,j,temp;

    printf("\nEnter number of elemrnts:");
    scanf("%d",&n);

    printf("\nEnter Data");
    for(i=0;i<n;i++)
    {
        printf("\nK[%d]=",i);
        scanf("%d",&k[i]);
    }

    printf("\nDisplaying Unsorted data:");
    for(i=0;i<n;i++)
    {
        printf("\nA[%d]=%d",i,k[i]);
    }

    last=n-1;
    for(pass=1;pass<=n-1;pass++)
    {
        exchg=0;
        for(j=0;j<=last-1;j++)
        {
            if(k[j] > k[j+1])
            {
                temp=k[j];
                k[j]=k[j+1];
                k[j+1]=temp;
                exchg++;
            }
        }
        if(exchg == 0)
        {
            break;
        }
        else
        {
            last=last-1;
        }
    }

    printf("\nDisplaying sorted data:");
    for(i=0;i<n;i++)
    {
        printf("\nA[%d]=%d",i,k[i]);
    }
}