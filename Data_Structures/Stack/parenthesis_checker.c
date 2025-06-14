//paren checker

#include<stdio.h>

#define max 50
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
        top--;
    }
    return ch;
}

int main()
{
    char exp[100],temp;
    int i,flag=1;
    printf("\nEnter expression:");
    gets(exp);
    for(i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
        {
            push(exp[i]);
        }

        if(exp[i]==')'||exp[i]=='}'||exp[i]==']')
        {
            if(top==-1)
            {
                flag=0;
            }
            else
            {
                temp=pop();

                if(temp==')'&&(exp[i]=='{'||exp[i]=='['))
                {
                    flag=0;
                }
                else if(temp=='}'&&(exp[i]=='('||exp[i]=='['))
                {
                    flag=0;
                }
                else if(temp==']'&&(exp[i]=='{'||exp[i]=='('))
                {
                    flag=0;
                }
            }
        }

    }

    if(top>=0)
    {
        flag=0;
    }

    if(flag==1)
    {
        printf("\nValid");
    }
    else
    {
        printf("\nInavlid");
    }

}