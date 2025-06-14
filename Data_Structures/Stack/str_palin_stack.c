//string palin using stack

#include<stdio.h>
#define max 100

char st[max];
int top=-1;

void push(char ch)
{
    if(top==max-1)
    {
        printf("\nOverflow");
    }
    else
    {
        top++;
        st[top]=ch;
    }
}

char pop()
{
    char ch='\0';
    if(top==-1)
    {
        printf("\nUnderflow");
    }
    else
    {
        ch=st[top];
        st[top]='\0';
        top--;
    }
    return ch;
}

int check(char ex[])
{
    int i=0;
    for(i=0;ex[i]!='\0';i++)
    {
        if(ex[i]!=pop())
        {
            return 1;
            break;
        }
    }
    return 0;
}

int main()
{
    char exp[100];
    int val=0,i;

    printf("\nEnter string:");
    gets(exp);

    for(i=0;exp[i]!='\0';i++)
    {
        push(exp[i]);
    }

    val=check(exp);

    if(val==0)
    {
        printf("\nPalin");
    }
    else
    {
        printf("\n NOT pal");
    }
    return 0;
}