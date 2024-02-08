// Implementing Queue using Stack

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
    struct node *new=malloc(sizeof(struct node));
    new->data=item;
    new->link=top;
    top=new;
}

int pop()
{
    struct node *temp2;
    int num;
    if(top==NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        temp2=top;
        top=top->link;
        num=temp2->data;
    }
    return num;
}

struct node *top1;

void push1(int item)
{
    struct node *new=malloc(sizeof(struct node));
    new->data=item;
    new->link=top1;
    top1=new;
}

int pop1()
{
    struct node *temp2;
    int num;
    if(top1==NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        temp2=top1;
        top1=top1->link;
        num=temp2->data;
    }
    return num;
}

void display()
{
    struct node *ptr;
    while(top!=NULL)
    {
        int n=pop();
        push1(n);
    }
    if(top1==NULL)
    {
        printf("It is empty");
    }
    else
    {
        ptr=top1;
        while(ptr!=NULL)
        {
            printf("Elements are ");
            printf(" %d",ptr->data);
            ptr=ptr->link;
        }
    }
}

void main()
{
    int choice,num,n,m;
    printf("1:Insert\n2:Delete\n3:Display\n");
    do
    {
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("Enter the element to be insert:");
                    scanf("%d",&num);
                    push(num);
                    break;
            case 2:while(top!=NULL)
                    {
                        n=pop();
                        push1(n);
                    }
                    m=pop1();
                    printf("Deleted element is ");
                    printf("%d",m);
                    break;
            case 3:display();
                    break;
        }
    }while(choice!=4);
}
