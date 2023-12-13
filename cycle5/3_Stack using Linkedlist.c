//Stack using Linked List

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *top;
void push(int item)
{
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    int temp=new->data;
    new->data=item;
    new->link=top;
    top=new;
}

void pop()
{
    struct node *temp;
    if(top==NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        temp=top;
        printf("Deleted element is %d",top->data);
        top=top->link;
        free(temp);
    }
}

void display()
{
    struct node *ptr;
    if(top==NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        ptr=top;
        printf("Elements in stack is ");
        while(ptr!=NULL)
        {
            printf(" %d",ptr->data);
            ptr=ptr->link;
        }
    }
}

void main()
{
    int ch,item;
    printf("1:PUSH\n2:POP\n3:DISPLAY\n4:EXIT\n");
    do
    {
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the number to be inserted: ");
                   scanf("%d",&item);
                   push(item);
                   break;
            case 2:pop();
                   break;
            case 3:display();
                   break;
        }
    }while(ch!=4);
}
