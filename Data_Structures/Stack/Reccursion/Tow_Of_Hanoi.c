#include<stdio.h>

void hanoi(int,char,char,char);
int i=0;

void main()
{
    int n;
    printf("\nEnter number of disc:");
    scanf("%d",&n);

    hanoi(n,'A','B','C');
    printf("\nSteps=%d",i);
}

void hanoi(int n, char sn, char in, char dn)
{
    if(n!=0)
    {
        i++;
    hanoi(n-1,sn,dn,in);
    printf("\nMove disc %d from %c to %c",n,sn,dn);
    hanoi(n-1,in,sn,dn);
    }
}