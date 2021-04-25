#include<stdio.h>
#define SIZE 10
int Queue[SIZE];
int front=-1; int rear=-1;
void insert()
{
    int value;
    if(rear==SIZE-1)
    printf("The queue is full,insertion is not possible\n");
    else
    {
        if(front==-1)
        front=0;
         printf("Enter the value to be inserted\n");
    scanf("%d",&value);
        rear=rear+1;
        Queue[rear]=value;
    }
    
}
void delete()
{
    if(front==-1 || front>rear)
    {
        printf("Queue underflow\n");
        return;
    }
      else if(front==rear)
      {
          front=rear=-1;
      }
    else
        {
        printf("Deleted %d\n",Queue[front]);
        front++;
    }
}
    void display()
    {
        int i;
        if(front==-1)
        printf("Queue is empty\n");
        else
        {
            printf("Queue is:\n");
            for(i=front;i<=rear;i++)
            printf("%d\t",Queue[i]);
            printf("\n");
        }
        
    }
    int main()
    {
        int choice;
       while(1)
       { 
           printf("Enter your choice:\n 1.Insert\n 2.Delete\n 3.Display\n 4.Exit\n");
        scanf("%d",&choice);
       switch(choice)
        {
            case 1:insert();
                  break;
            case 2:delete();
                    break;
            case 3:display();
                    break;
            case 4:exit(0);
            default:printf("Incorrect choice");
        }
       }
       return 0;
    }
