//Reversing a number using stack

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *top1;
struct node *top2;

void push(struct node **top,int item)
{
    struct node *new=malloc(sizeof(struct node));
    new->data=item;
    new->link=*top;
    *top=new;
}

int pop(struct node **top)
{
    if(*top==NULL)
    {
        printf("Stack is empty");
    }
    struct node *temp = *top;
    int data = temp->data;
    *top = temp->link;
    free(temp);
    return data;
}

void display(struct node **top)
{
    if(top==NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        struct node *ptr;
        ptr=top;
        while(ptr!=NULL)
        {
            printf("%d",ptr->data);
            ptr=ptr->link;
        }
    }
}

void main()
{
    int num,i,rnum,tnum,n;
    printf("Enter the number:");
    scanf("%d",&num);
    struct node *top1 = NULL, *top2 = NULL;
    while(num!=0)
    {
        rnum=num%10;
        num=num/10;
        push(&top1,rnum);
        i++;
    }
    //display(top1);
    printf("\n");
    while(top1!=NULL)
    {
        n=pop(&top1);
        push(&top2,n);
    }
    printf("Reversed Number is ");
    display(top2);
}
