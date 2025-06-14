#include<stdio.h>
int Sum(int);
void main()
{
    int n,s;
    printf("\nEnter number:");
    scanf("%d",&n);
    s=Sum(n);
    printf("\nSUM=%d",s);
}
int Sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n+Sum(n-1);
    }
}