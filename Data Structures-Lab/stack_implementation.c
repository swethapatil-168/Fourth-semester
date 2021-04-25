#include <stdio.h>
# define SIZE 10
int stack[SIZE],top=-1;
void push(int);
void pop();
void display();
int main()
{
    int value,choice;
   while(1)
   {
    printf("Enter the choice you want to perform:\n 1.Push\n 2.Pop\n 3.Display\n 4.Exit\n");
    scanf("%d",&choice);
       switch(choice)
       {
           case 1:printf("Enter the value to be inserted\n");
                  scanf("%d",&value);
                  push(value);
                  break;
            case 2:pop();
                    break;
            case 3:display();
                    break;
            case 4:exit(0);
            default:printf("Try again by entering the correct choice\n");
       }
   }
    
}
void push(int value)
{
    if(top==SIZE-1)
        printf("Stack is full,insertion is not possible\n");
        else
        {
            top=top+1;
            stack[top]=value;
            printf("Insertion is successful\n");
        }
}
void pop()
{
    if(top==-1)
        printf("Stack underflow\n");
    else
    {
        
        printf("Deletion of %d is successful\n",stack[top]);
        top=top-1;
    }
}
void display()
{
    if(top==-1)
        printf("Stack is empty\n");
        else
        {
            printf("The elements of stack are:\n");
        for(int i=top;i>=0;i--)
            printf("%d\n",stack[i]);
        }   
}

