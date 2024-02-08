//Reverse a Queue

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *front=NULL;
struct node *rear=NULL;

void enqueue(int item)
{
    struct node *new=malloc(sizeof(struct node));
    new->data=item;
    new->link=NULL;
    if(front==NULL)
    {
        front=rear=new;
    }
    else
    {
        rear->link=new;
        rear=new;
    }
}

int dequeue()
{
    struct node *temp;
    int temp1;
    if(front==NULL)
    {
        printf("Queue is empty");
    }
    else if(front==rear)
    {
        temp=front;
        front=rear=NULL;
        temp1=temp->data;
    }
    else
    {
        temp=front;
        front=front->link;
        temp1=temp->data;
    }
    return temp1;
}

void display()
{
    struct node *ptr;
    if(front==NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        ptr=front;
        printf("Elements are: ");
        while(ptr!=NULL)
        {
            printf(" %d",ptr->data);
            ptr=ptr->link;
        }
    }
}

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

void main()
{
    int choice,num;
    printf("1:Insert\n2:Reverse\n3:Display\n4:Exit\n");
    do
    {
        printf("\nEnter the choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("Enter the element to be insert:");
                    scanf("%d",&num);
                    enqueue(num);
                    break;
            case 2:while(front!=NULL)
                    {
                        int n=dequeue();
                        push(n);
                    }
                    printf("Reverse : ");
                    while(top!=NULL)
                    {
                        int n1=pop();
                        enqueue(n1);
                    }
                    display();
                    break;
            case 3:display();
                    break;
        }
    }while(choice!=4);
}
