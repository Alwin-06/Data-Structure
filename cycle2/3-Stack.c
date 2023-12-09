#include<stdio.h>
#define invalid -999
#define size 5
int s[10],top=-1;

void push(item)
{
        if(top==(size-1))
        {
                printf("STACK OVERFLOW!! \n");
        }
        else
        {
                top=top+1;
                s[top]=item;
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


void display()
{
        int i;
        if(top==-1)
        {
                printf("STACK EMPTY!! \n");
        }
        else
        {
                for(i=0;i<=top;i++)
                {
                        printf("%d ",s[i]);
                }
                printf("\n");
        }
}


void main()
{
        int c,item,p;
        char choice='y';
        while(choice=='y' || choice=='Y')
        {
                printf("1:PUSH \n2:POP \n3:DISPLAY \n Enter your choice: ");
                scanf("%d",&c);
                if(c==1)
                {
                        printf("Enter the item to be inserted: ");
                        scanf("%d",&item);
                        push(item);
                }
                else if(c==2)
                {
                        p=pop();
                        printf("The deleted element is %d \n",p);
                }
                else if(c==3)
                {
                        display();
                }
                else
                {
                        printf("Invalid Choice!!");
                }
                printf("Do you want to continue?(y/n) : ");
                scanf("%s",&choice);
        }
}
