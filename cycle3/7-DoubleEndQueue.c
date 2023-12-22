#include <stdio.h>
#define size 25
int dq[size],front=-1,rear=-1;

void addFront(int item)
{
    int i;
    if(front==0 && rear==size-1)
    {
        printf("INSERTION NOT POSSIBLE : DOUBLE ENDED QUEUE IS FULL\n");
    }
    else if(front==-1)
    {
        front=rear=0;
        dq[front]=item;
    }
    else if(front>0)
    {
        front++;
        dq[front]=item;
    }
    else
    {
        for(i=rear;i>=front;i--)
        {
            dq[i+1]=dq[i];
        }
        dq[front]=item;
        rear++;
    }
}

void addRear(int item)
{
    int i;
    if(front==0 && rear==size-1)
    {
        printf("INSERTION NOT POSSIBLE : DOUBLE ENDED QUEUE IS FULL\n");
    }
    else if(front==-1)
    {
        front=rear=0;
        dq[front]=item;
    }
    else if(rear<size-1)
    {
        rear++;
        dq[rear]=item;
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            dq[i-1]=dq[i];
        }
        dq[rear]=item;
        front--;
    }
}

void remFront()
{
    if(front==-1)
    {
        printf("DOUBLE ENDED QUEUE IS EMPTY\n");
    }
    else if(front==rear)
    {
        printf("Element removed : %d\n",dq[front]);
        front=rear=-1;
    }
    else
    {
        printf("Element removed : %d\n",dq[front]);
        front++;
    }
}

void remRear()
{
    if(front==-1)
    {
        printf("DOUBLE ENDED QUEUE IS EMPTY\n");
    }
    else if(front==rear)
    {
        printf("Element removed : %d\n",dq[rear]);
        front=rear=-1;
    }
    else
    {
        printf("Element removed : %d\n",dq[rear]);
        rear--;

    }
}

void display()
{
    int i;
    if(front==-1)
    {
        printf("DOUBLE ENDED QUEUE IS EMPTY\n");
    }
    else
    {
        printf("Double Ended Queue Elements : ");
        for(i=front;i<=rear;i++)
        {
            printf("%d ",dq[i]);
        }
        printf("\n");
    }
}

void main()
{
    int item,value;
    char ch='y';
    while(ch=='y' || ch=='Y')
    {
        printf("1 :Insert at front\n2 :Insert at rear\n3 :Delete from front\n4 :Delete from rear\n5 : DISPLAY\n");
        printf("Enter your choice : ");
        scanf("%d",&value);
        switch(value)
        {
            case 1: printf("Enter the element to be added : ");
                    scanf("%d",&item);
                    addFront(item);
                    break;
            case 2: printf("Enter the element to be added : ");
                    scanf("%d",&item);
                    addRear(item);
                    break;
            case 3: remFront();
                    break;
            case 4: remRear();
                    break;
            case 5: display();
                    break;

            default : printf("Invalid choice\n");
                      break;

        }
        printf("Do you want to continue?(y/n) : ");
        scanf(" %c",&ch);
    }
}
