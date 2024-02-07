//Reverse a string using stack

#include<stdio.h>

#define invalid -999
#define size 5
char s[10];int top=-1;

void push(char c)
{
        if(top==(size-1))
        {
                printf("STACK OVERFLOW!! \n");
        }
        else
        {
                top=top+1;
                s[top]=c;
        }
}

int pop()
{
        int item;
        if(top==-1)
        {
                printf("STACK UNDERFLOW!! \n");
                return invalid;
        }
        else
        {
                item=s[top];
                top=top-1;
                return item;
        }
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
    while(top!=-1)
    {
        ch=pop();
        str[i++]=ch;
    }
    printf("Reversed string: %s\n", str);
}
