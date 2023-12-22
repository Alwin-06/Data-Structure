
#include <stdio.h>
#define size 25
int front=-1,rear=-1;
struct PQ
{
    int item;
    int priority;
}pq[size];

void Enqueue(int Item,int Priority)
{
    int i,loc;
    if(front==0 && rear==size-1)
    {
        printf("INSERTION NOT POSSIBLE : PRIORITY QUEUE IS FULL!!");
    }
    else if(front==-1)
    {
        front=rear=0;
        pq[rear].item=Item;
        pq[rear].priority=Priority;
    }
    else
    {
        if(rear==size-1)
        {
            for(i=front;i<=rear;i++)
            {
                pq[i-1]=pq[i];
            }
            front--;
            rear--;
        }
        for(i=rear;i>=front;i--)
        {
            if((pq[i].priority) < Priority)
            {
                break;
            }
        }
        loc=i+1;
        for(i=rear;i>=loc;i--)
        {
            pq[i+1]=pq[i];
        }
        pq[loc].item=Item;
        pq[loc].priority=Priority;
        rear=rear+1;
    }
}

void Dequeue()
{
    if(front==-1)
    {
        printf("PRIORITY QUEUE EMPTY\n");
    }
    else if(front==rear)
    {
        printf("Element Removed : %d\n",pq[front].item);
        front=rear=-1;
    }
    else
    {
        printf("Element Removed : %d\n",pq[front].item);
        front++;
    }
}

void Display()
{
    int i;
    if(front==-1)
    {
        printf("PRIORITY QUEUE EMPTY\n");
    }
    else
    {
        printf("Priority Queue Elements : ");
        for(i=front;i<=rear;i++)
        {
            printf("%d ",pq[i].item);
        }
        printf("\n");
    }
}

void main()
{
    int value,item,priority;
    char ch='y';
    while(ch=='y'||ch=='Y')
    {
        printf("1 : ENQUEUE\n2 : DEQUEUE\n3 : DISPLAY\n");
        printf("Enter your choice : ");
        scanf("%d",&value);
        switch(value)
        {
            case 1: printf("Enter the item to be inserted : ");
                    scanf("%d",&item);
                    printf("Enter the priority : ");
                    scanf("%d",&priority);
                    Enqueue(item,priority);
                    break;
            case 2: Dequeue();
                    break;
            case 3: Display();
                    break;
            default : printf("Invalid choice\n");
        }
        printf("Do you want to continue?(y/n) : ");
        scanf(" %c",&ch);
    }
}
