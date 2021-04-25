#include <stdio.h>
#include <ctype.h>
#define SIZE 20
char stack[SIZE]; 
int top=-1;
push(char element)
{
    top=top+1;
    stack[top]=element;
}
char pop()
{
    return(stack[top--]);
}
int pre(char symbol)
{
    if(symbol=='^')
    {
        return(3);
    }
    else if(symbol == '*' || symbol == '/')
    {
    return(2);
    }
    else if(symbol=='+' || symbol=='-')
       {
        return(1);
       }
    else
        return(0);
}
int main()
{
    int i=0,k=0;
    char infix[20],postfix[20],ch,elem;
    
    printf("Enter the infix expression\n");
    scanf("%s",infix);
    push('#');
    while((ch=infix[i++])!='\0')
    {
        if(ch=='(')
            push(ch);
        else if(isalnum(ch))
            postfix[k++]=ch;
        else if(ch==')')
        {
            while(stack[top]!='(')
                postfix[k++]=pop();
                if(stack[top]=='#')
                {
                    printf("Invalid expression\n");
                    exit(1);
                }
                  elem=pop();
        }
        else if(ch=='^' || ch=='*' || ch=='/' || ch=='+' || ch=='-')
            {
                while(stack[top]!='#' && pre(stack[top])>=pre(ch))
            postfix[k++]=pop();
            push(ch);
            }
       else
       {
           printf("Enter the correct characters in the expression\n");
           exit(1);
       }
    }
    while(stack[top]!='#')
    {
        postfix[k++]=pop();
    }
    postfix[k++]='\0';
    printf("The postfix expression of the given expression is %s\n",postfix);
    return 0;
}
