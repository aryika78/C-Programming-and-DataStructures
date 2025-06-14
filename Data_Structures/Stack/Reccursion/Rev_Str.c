//Write a C program to reverse a string using stack
#include<stdio.h>
void reverse (void);

void main()
{
    printf("\nEnter any sentence:");
    reverse();
}
void reverse()
{
    char c;
    if((c=getchar()) != '\n')
    {
        reverse();
    }
    putchar(c);
}