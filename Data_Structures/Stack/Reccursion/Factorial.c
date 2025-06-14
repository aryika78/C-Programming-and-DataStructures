//Write reccursive program to compute factorial of a given number. Which data structure can be used to implement this program?

#include<stdio.h>

int Facto(int);

void main()
{
    int n;
    printf("\nEnter any number:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("\nInvalid input... program termination...");
    }
    else
    {
        printf("Factorial of %d is %d", n, Facto(n));
    }
}    
    int Facto(int n)
    {
        if(n==0)
        {
            return 1;
        }
        else
        {
            return n*Facto(n-1);
        }
    }
