// Binary tree

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

void tree(struct node* ptr,int item)
{
    int item1,item2;
    char ch,c;
    if(ptr!=NULL)
    {
        ptr->data=item;
        
        printf("Node %d has left subtree(Y/N): ",ptr->data);
        scanf(" %c",&ch);
        if(ch=='Y'||ch=='y')
        {
            struct node* lc;
            lc=malloc(sizeof(struct node*));
            ptr->left=lc;
            printf("Enter the value: ");
            scanf("%d",&item1);
            tree(lc,item1);
        }
        else
        {
            ptr->left=NULL;
        }
        printf("Node %d has right subtree(Y/N): ",ptr->data);
        scanf(" %c",&c);
        if(c=='Y'||c=='y')
        {
            struct node* rc;
            rc=malloc(sizeof(struct node*));
            ptr->right=rc;
            printf("Enter the value: ");
            scanf("%d",&item2);
            tree(rc,item2);
        }
        else
        {
            ptr->right=NULL;
        }
    }
}

void preorder(struct node*root)
{
    if(root!=NULL)
    {
        printf(" %d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
    printf("\n");
}

void postorder(struct node*root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf(" %d",root->data);
    }
    printf("\n");
}

void inorder(struct node*root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf(" %d",root->data);
        inorder(root->right);
    }
    printf("\n");
}

void main()
{
    int item;
    struct node* ptr=malloc(sizeof(struct node*));
    printf("Enter the root value: ");
    scanf("%d",&item);
    tree(ptr,item);
    printf("Inorder is ");
    inorder(ptr);
    printf("Preorder is ");
    preorder(ptr);
    printf("Postorder is ");
    postorder(ptr);
}
