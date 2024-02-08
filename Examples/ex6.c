//Reversing a number using stack (Another method)

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

void main()
{
    int choice,num;
    printf("Enter the element to be insert:");
    scanf("%d",&num);
    int i=0,rnum;
    while(num!=0)
    {
        rnum=num%10;
        push(rnum);
        num=num/10;
        i++;
    }
    while(top!=NULL)
    {
        int n=pop();
        push1(n);
    }
    printf("Reverse : ");
    while(top1!=NULL)
    {
        int n1=pop1();
        printf("%d",n1);
    }
   
}
