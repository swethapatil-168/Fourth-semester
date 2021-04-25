#include <stdio.h>
struct bst {
    int data;
    struct bst *left;
    struct bst *right;
};

struct bst* create(int data) {
    struct bst *temp = (struct bst*) malloc(sizeof(struct bst));
    temp->data = data;
    temp->right=NULL; 
    temp->left = NULL;
    return temp;
}

void insert(struct bst *root, struct bst *temp) {
    if(temp->data < root->data) {
        if(root->left!=NULL)
            insert(root->left, temp);
        else
            root->left = temp;
    }
    else {
        if(root->right!=NULL)
            insert(root->right, temp);
        else
            root->right = temp;
    }
}

void inorder(struct bst *root) {
    if(root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}
void preorder(struct bst *root) {
    if(root == NULL)
        return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct bst *root) {
    if(root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

int main() 
{
    int choice, data;
    struct bst *root = NULL;
    printf("Enter the choice you want to perform:\n1.Insert\n2.Inorder traversal\n3.Preorder traversal\n4.Postorder traversal\n5.Exit\n");
    while(1) 
        {
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch(choice) {
            case 1:printf("Enter data:\n");
                   scanf("%d", &data);
                   if(root == NULL) 
                       {
                       root = create(data);
                       }
                else 
                    {
                    insert(root, create(data));
                    }
                break;
            case 2:
                if(root == NULL) {
                    printf("Tree is Empty\n");
                }
                else {
                    printf("Inorder traversal of tree is:\n");
                    inorder(root);
                    printf("\n");
                }
                break;
            case 3:
                if(root == NULL) {
                    printf("\nTree is Empty\n");
                }
                else {
                    printf("Preorder traversal of tree is:\n");
                    preorder(root);
                    printf("\n");
                }
                break;
            case 4:
                if(root == NULL) {
                    printf("Tree is Empty\n");
                }
                else {
                    printf("Postorder traversal of tree is:\n");
                    postorder(root);
                    printf("\n");
                }
                break;
            case 5:exit(0);
            default:printf("Incorrect choice...Enter the correct choice\n");
                break;
        }
    }
    return 0;
}
