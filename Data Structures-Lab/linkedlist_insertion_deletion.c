#include <stdio.h>
struct node{
    int data;
    struct node *next;
};
insert_begin(struct node **head,int new_data)
{
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=NULL;
    if(*head==NULL)
    {
        *head=new_node;
    }
    else
    {
        new_node->next=*head;
        *head=new_node;
    }
    printf("Insertion successful\n");
}
insert_end(struct node **head,int new_data)
{
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=NULL;
    struct node *temp=*head;
    if(*head==NULL)
    {
        *head=new_node;
    }
    else{
        while(temp->next!=NULL)
           {
                temp=temp->next;
           }
        temp->next=new_node;
        printf("Insertion successful\n");
    }
}
insert_pos(struct node **head,int new_data,int pos)
{
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=NULL;
    struct node *temp=*head;
    if(pos==1)
    {
        new_node->next=temp;
        *head=new_node;
        return;
    }
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    new_node->next=temp->next;
    temp->next=new_node;
    printf("Insertion successful\n");
}
delete_begin(struct node **head)
{
    struct node *temp=*head;
    if(*head==NULL)
        printf("List is empty,deletion is not possible\n");
    else
    {
        *head=temp->next;
        free(temp);
        printf("Deletion successful\n");
    }
}
delete_end(struct node **head)
{
    struct node *temp,*temp1;
    temp=*head;
    if(*head==NULL)
    {
        printf("List is empty,deletion is not possible\n");
    }
    else if(temp->next==NULL)
    {
        *head=NULL;
        free(head);
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=NULL;
        free(temp);
    }
}
delete_pos(struct node **head,int pos)
{
    struct node *temp,*temp1;
    temp=*head;
    if(*head==NULL)
    {
        printf("List is empty, deletion is not possible\n");
        return;
    }
    for(int i=1;i<pos;i++)
    {
        temp1=temp;
        temp=temp->next;
        if(temp==NULL)
        {
            printf("There are less elements than the given position in the list\n");
            exit(0);
        }
    }
    temp1->next=temp->next;
    free(temp);
    printf("Deletion successful\n");
}
display(struct node **head)
{
    struct node *temp=*head;
    if(*head==NULL)
        {
            printf("List is empty\n");
            return;
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
    while(1)
    {
        printf("Enter the choice you want to perform\n1.Insert at beginning\n2.Insert at End\n3.Insert at specified position\n4.Delete at beginning\n5.Delete at end\n6.Delete at specified position\n7.Display\n8.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("Enter the data you want to add\n");
                    scanf("%d",&value);
                    insert_begin(&head,value);
                    break;
            case 2:printf("Enter the data you want to add\n");
                    scanf("%d",&value);
                    insert_end(&head,value);
                    break;
            case 3:printf("Enter the data you want to add\n");
                    scanf("%d",&value);
                    printf("Enter the position\n");
                    scanf("%d",&pos);
                    insert_pos(&head,value,pos);
                    break;
            case 4:delete_begin(&head);
                   break;
            case 5:delete_end(&head);
                   break;
            case 6:printf("Enter the position\n");
                    scanf("%d",&pos);
                    delete_pos(&head,pos);
                   break;
            case 7:display(&head);
                   break;
            case 8:exit(0);
            default:printf("Incorrect choice...Enter the correct choice\n");
        }
    }
    return 0;
}
