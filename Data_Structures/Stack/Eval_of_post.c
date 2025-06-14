#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

float STACK[50];
int TOP=-1,i,len;
float final_result, n1, n2, value, result;
float pop();
void push(float);
void main()
{
    char postfix[50];
    printf("\nEvaluation of Postfix Expression....");
    printf("\nEnter valid Postfix Expression:");
    gets(postfix); //postfix = 3A+
    len=strlen(postfix);
    for(i=0;i<len;i++)
    {
        if(postfix[i] >= '0' && postfix[i] <= '9')
        {
            push(postfix[i]-'0');
        }
        else if((postfix[i]>='a' && postfix[i] <='z') || (postfix[i] >='A' && postfix[i]<='Z'))
        {
            printf("\nEnter value for %c :",postfix[i]);
            scanf("%f",&value);
            push(value);
        }
        else // if there is an operator
        {
            n1=pop();
            n2=pop();
            switch(postfix[i])
            {
                case '^': // 3^2 == 32^==3,2== n1=2,n2=3
                    result=pow(n2,n1);
                    //pow(base,power[exponent])
                    push(result);
                    break;
                case '+':
                    result=n2+n1;
                    push(result);
                    break;
                case '-':
                    result=n2-n1;
                    push(result);
                    break;
                case '/':
                    result=n2/n1;
                    push(result);
                break;
                case '*':
                    result=n2*n1;
                    push(result);
                break;
                default:
                    printf("\nInvalid operator...");
                    exit(0);
                break;
            }
        }
    }
    final_result=pop();
    printf("\nThe final result is %f",final_result);
}

void push(float val)
{
    STACK[++TOP]=val;
}

float pop()
{
    if(TOP ==-1)
    {
        printf("\nInvalid Postfix Expression...");
        exit(0);
    }
    else
    {
        return STACK[TOP--];
    }
}