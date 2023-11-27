#include<stdio.h>
#define size 10
#define invalid -9999
int cq[20],f=-1,r=-1;

void insert(int item)
{
        if(f==(r+1)%size)
        {
                printf("QUEUE OVERFLOW");
        }
        else
        {
                if(f==-1)
                {
                        f=0;
                }
                r=(r+1)%size;
                cq[r]=item;
        }

}

int delete()
{
        int item;
        if(f==-1)
        {
                printf("QUEUE EMPTY");
        }
        else
        {
                item=cq[f];
                f=(f+1)%size;
                if(f==r%size)
                {
                        f=r=-1;
                }
                return item;
        }
}

void display()
{
        int i;
        if(f==-1)
        {
                printf("QUEUE EMPTY");
        }
        else if(f<=r)
        {
                for(i=f;i<=r;i++)
                {
                        printf(" %d",cq[i]);
                }
        }
        else
        {
                for(i=f;i<size-1;i++)
                {
                        printf("%d",cq[i]);
                }
                for(i=0;i<r;i++)
                {
                        printf("%d",cq[i]);
                }
        }
}

void main()
{
        int num,choice;
        char c='y';
        printf("1:Insert\n2:Delete\n3:Display\n");
        while(c=='y'||c=='Y')
        {
                printf("Enter your choice: ");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:printf("Enter the number to be inserted: ");
                               scanf("%d",&num);
                               insert(num);
                               break;
                        case 2:printf("Deleted element is %d",delete());
                               break;
                        case 3:display();
                               break;
                        default:printf("Invalid choice");
                }
                printf("\nDo yo want to repeat(y/n): ");
                scanf(" %c",&c);
        }

}
