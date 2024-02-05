#include<stdio.h>

struct person
{
    char name;
    int time;
}p[20];

int f=-1;
int r=-1;
void enqueue(char c,int t)
{
    if(f==(r+1)%5)
    {
        printf("Queue is Full");
    }
    else
    {
        if(f==-1)
        {
            f=0;
        }
        r=(r+1)%5;
        p[r].name=c;
        p[r].time=t;
    }
}

void findtime()
{
    char c;
    int i=0;
    int wt;
    printf("Enter the name of person:");
    scanf(" %c",&c);
    while(p[i].name!=c)
    {
        wt=wt+p[i].time;
        i++;
    }
    printf("Waiting time=%d\n",wt);
}

void main()
{
    int n,i;
    char name;
    int time;
    printf("How many people: ");
    scanf("%d",&n);
    printf("Enter the name and service time of each person:");
    for(i=0;i<n;i++)
    {
        scanf(" %c %d",&name,&time);
        enqueue(name,time);
    }
    for(i=0;i<n;i++)
    {
        printf("Name: %c , Time: %d\n",p[i].name,p[i].time);
    }
    findtime();
}
