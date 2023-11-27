
#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* link;
};

void InsertFront(struct node* head,int element)
{
    struct node* newnode;
    newnode=malloc(sizeof(struct node));
    newnode->data=element;
    newnode->link=head->link;
    head->link=newnode;
}

void InsertEnd(struct node* head,int element)
{
    struct node* ptr,*newnode;
    newnode=malloc(sizeof(struct node));
    ptr=head;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=newnode;
    newnode->data=element;
    newnode->link=NULL;
}

void InsertAny(struct node* head,int element,int locelement)
{
    struct node* ptr,*newnode;
    newnode=malloc(sizeof(struct node));
    ptr=head;
    while(ptr->data!=locelement)
    {
        ptr=ptr->link;
    }
    newnode->link=ptr->link;
    newnode->data=element;
    ptr->link=newnode;
}

void DeleteFront(struct node* head)
{
    if(head->link==NULL)
    {
        printf("Empty List\n");
    }
    else
    {
        struct node* ptr;
        int element;
        ptr=head->link;
        head->link=ptr->link;
        element=ptr->data;
        free(ptr);
        printf("Element deleted : %d\n",element);
    }
}

void DeleteEnd(struct node* head)
{
    if(head->link==NULL)
    {
        printf("Empty List\n");
    }
    else
    {
        struct node* ptr,*ptr1;
        int element;
        ptr=head;
        while(ptr->link!=NULL)
        {
            ptr1=ptr;
            ptr=ptr->link;
        }
        element=ptr->data;
        ptr1->link=NULL;
        free(ptr);
        printf("Element deleted : %d\n",element);
    }
}

void DeleteAny(struct node* head,int locelement)
{
    if(head->link==NULL)
    {
        printf("Empty List\n");
    }
    else
    {
        struct node* ptr,*ptr1;
        int element;
        ptr=head;
        while(ptr->data!=locelement)
        {
            ptr1=ptr;
            ptr=ptr->link;
        }
        element=ptr->data;
        ptr1->link=ptr->link;
        free(ptr);
        printf("Element deleted : %d\n",element);
    }
}

void display(struct node* head)
{
    if(head->link==NULL)
    {
        printf("Empty List\n");
    }
    else
    {
        struct node* ptr;
        printf("Elements of Linked List : ");
        ptr=head;
        while(ptr->link!=NULL)
        {
            ptr=ptr->link;
            printf("%d ",ptr->data);
        }
        printf("\n");
    }
}

void main()
{
    struct node* head;
    head=malloc(sizeof(struct node));
    head->link=NULL;
    int value,element,location;
    char ch='y';
    while(ch=='y'||ch=='Y')
    {
        printf("1 : Display\n2 : Insert through Front\n3 : Insert through End\n4 : Insert through Specified Position\n");
        printf("5 : Delete through Front\n6 : Delete through End\n7 : Delete through Specified Position\n");
        printf("Enter your choice : ");
        scanf("%d",&value);
        switch(value)
        {
            case 1: display(head);
                    break;

            case 2: printf("Enter the element to be inserted : ");
                    scanf("%d",&element);
                    InsertFront(head,element);
                    break;

            case 3: printf("Enter the element to be inserted : ");
                    scanf("%d",&element);
                    InsertEnd(head,element);
            case 4: printf("Enter the element to be inserted : ");
                    scanf("%d",&element);
                    printf("Enter the location : ");
                    scanf("%d",&location);
                    InsertAny(head,element,location);
                    break;

            case 5: DeleteFront(head);
                    break;

            case 6: DeleteEnd(head);
                    break;

            case 7: printf("Enter the element to be removed : ");
                    scanf("%d",&element);
                    DeleteAny(head,element);
                    break;

            default : printf("Invalid Choice\n");
        }
        printf("Do you want to continue?(y/n) : ");
        scanf(" %c",&ch);
    }
}
