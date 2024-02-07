//Reverse a string using stack with linkedlist

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *top;
void push(char item)
{
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    int temp=new->data;
    new->data=item;
    new->link=top;
    top=new;
}

int pop()
{
    char s;
    struct node *temp;
    if(top==NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        temp=top;
        s=top->data;
        top=top->link;
    }
    return s;
}

void main()
{
    char c[25],n,ch,str[25];
    int i,length;
    printf("Enter the String: ");
    scanf(" %s",&c);
    for(i=0;c[i]!='\0';i++)
    {
        length=length+1;
    }
    for(i=0;i<length;i++)
    {
        n=c[i];
        push(n);
    }
    i=0;
    while(top!=NULL)
    {
        ch=pop();
        str[i++]=ch;
    }
    printf("Reversed string: %s\n", str);
}
