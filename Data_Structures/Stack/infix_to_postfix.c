#include<stdio.h>
#include<string.h>

int top=-1,rank=0;
char stack[50];

void push(char item)
{
    stack[++top]=item;
}

char pop()
{
    return stack[top--];
}

int Rank(char symbol)
{
    switch(symbol)
    {
        case '+':
        case '-':
        case '*':
        case '/':
        case '^': return -1;
        default: return 1;
    }
}
//Input precedence funtion F
int F(char symbol)
{
    switch(symbol)
    {
        case '+':
        case '-': return 1;
        case '*':
        case '/': return 3;
        case '^': return 6;
        case '(': return 9;
        case ')': return 0;
        default: return 7;
    }

}

//Stack precedence function G
int G(char symbol)
{
    switch(symbol)
    {
        case '+':
        case '-': return 2;
        case '*':
        case '/': return 4;
        case '^': return 5;
        case '(': return 0;
        case '#': return -1;
        default: return 8;
    }
}


// to convert infix to postfix
int Infix_Postfix(char infix[50],char postfix[50])
{
    int i,j=0,length;
    char ch,temp;
    length=strlen(infix);
    push('#');
    for(i=0;i<length;i++)
    {
        ch = infix[i];
        while(F(ch) < G(stack[top]))
        {
            temp=pop();
            rank = rank + Rank(temp);

            if(rank<1)
            {
                return -1;
            }
            postfix[j++]= temp;
        }

        if(F(ch) != G(stack[top]))
        {
            push(ch);
        }
        else
        {
            pop();
        }
    }// end of for

    while(stack[top] != '#')
    {
            temp=pop();
            rank = rank + Rank(temp);
            if(rank<1)
            {
                return -1;
            }
            postfix[j++]= temp;
    }
    postfix[j] = '\0';
    return rank;
}


void main()
{
    char infix[50],postfix[50];
    printf("\nEnter valid infix expression:");
    gets(infix);
    rank = Infix_Postfix(infix,postfix);
    if(rank==1)
    {
        printf("\nPostfix expression is : %s",postfix);
    }
    else
    {
        printf("\nInavlid infix expression");
    }
}

