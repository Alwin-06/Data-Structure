#include<stdio.h>
#define size 20
int q[20],f=-1,r=-1,item;

void enqueue(int item)
{
        if(r==(size-1))
        {
                printf("QUEUE OVERFLOW");
        }
        else if(f==-1)
        {
                f=0;
        }
        r++;
        q[r]=item;
}

int dequeue()
{
        if(f==-1)
        {
                printf("QUEUE UNDERFLOW");
        }
        else
        {
                item=q[f];
                f++;
                if(f==r+1)
                {
                        f=r=-1;
                }
        }
        return item;
}

void display()
{
        int i;
        printf("Remaining elements of queue is ");
        for(i=f;i<=r;i++)
        {
                printf(" %d",q[i]);
        }
}

void main()
{
        char c='y';
        int choice,num;
        printf("1:Insert\n2:Delete\n3:Display\n");
        while(c=='y'||c=='Y')
        {
                printf("Enter your choice: ");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:printf("Enter the number to be inserted: ");
                               scanf("%d",&num);
                               enqueue(num);
                               break;
                        case 2:printf("Deleted element is %d",dequeue());
                               break;
                        case 3:display();
                               break;
                        default:printf("Invalid choice");
                }
                printf("\nDo yo want to repeat(y/n): ");
                scanf(" %c",&c);
        }
}
