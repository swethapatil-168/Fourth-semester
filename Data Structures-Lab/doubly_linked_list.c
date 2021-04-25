#include <stdio.h>
int n=0;
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
void insert_speci(struct node **head,int value,int pos)
{
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    struct node *temp=*head;
    //temp->prev=NULL;
    new_node->data=value;
    new_node->next=NULL;
    new_node->prev=NULL;
       if(*head==NULL && pos==1)
    {
        temp=new_node->next;
        *head=new_node;
        n++;
        printf("Insertion successful\n");
        return;
    }
    else if(pos==1)
    {
        new_node->next=temp;
        temp->prev=new_node;
        *head=new_node;
        n++;
        printf("Insertion successful\n");
        return;
    }
    else if(pos>n)
       {
            printf("Can't insert...Enter the valid position\n");
            return;
       }
        
    for(int i=0;i<pos-1;i++)
    {
        if(temp==NULL)
        {
            printf("Can't Insert\n");
            return;
        }
        temp=temp->next;
    }
        new_node->next=temp;
        new_node->prev=temp->prev;
        temp->prev->next=new_node;
        temp->prev=new_node;
        n++;
       printf("Insertion successful\n");
       return;
}
void delete_speci(struct node **head)
{
    struct node *temp=*head;
    struct node *ptr=*head;
    int value;
    printf("Enter the value you want to delete\n");
    scanf("%d",&value);
    if(*head==NULL)
      {
        printf("List is empty deletion is not possible\n");
        return;
      }
    while(temp->data!=value)
    {
        temp=temp->next;
        if(temp==NULL)
            {
                printf("Element not found in the list\n");
            return;
            }
    }
    if(temp==*head)
    {
        *head=temp->next;
        free(temp);
        n--;
        return;
    }
    if(temp->next==NULL)
     {
        ptr=temp->prev;
        free(temp);
        ptr->next=NULL;
        printf("Deletion successful\n");
        n--;
        return;
     }
    if(temp->next->next==NULL)
        {
            temp->next->prev=temp->prev;
            temp->prev->next=temp->next;
            free(temp);
            printf("Deletion successful\n");
            n--;
            return;
        }
    else 
    {
        ptr=temp->next;
        ptr->prev=temp->prev;
        temp->prev->next=ptr;
        free(temp);
        printf("Deletion successful\n");
        n--;
    }
}
display(struct node **head)
{
    struct node *temp=*head;
    if(temp==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        printf("The elements in the list are:\n");
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
int main()
{
    struct node *head=NULL;
    int choice,value,pos;
    printf("Enter the choice you want to perform\n1.Insert at left of specified position\n2.Delete a specified node\n3.Display\n4.Exit\n");
    while(1)
    {
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("Enter the data you want to add\n");
                   scanf("%d",&value);
                   printf("Enter the position\n");
                   scanf("%d",&pos);
                   insert_speci(&head,value,pos);
                   break;
            case 2:delete_speci(&head);
                   break;
            case 3:display(&head);
                   break;
            case 4:exit(0);
            default:printf("Incorrect choice...Enter the correct choice\n");
        }
    }
    return 0;
}
