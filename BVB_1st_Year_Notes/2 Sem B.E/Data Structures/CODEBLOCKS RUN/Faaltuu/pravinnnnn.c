#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 5
struct process
{
    int pn;
    int cputime;
};
struct queue
{
    struct process q[MAX];
    int front,rear;
};
void readprocess(struct process *p)
{
    scanf("%d\t%d",&p->pn,&p->cputime);
}
void displayprocess(struct process p)
{
    printf("%d\t%d",p.pn,p.cputime);
}
int isfull(struct queue *p)
{
    if(((p->rear+1)%MAX)==p->front)
        return 1;
    else
        return 0;
}

int isempty(struct queue *p)
{
    if(p->rear==p->front)
        return 1;
    else
        return 0;
}

void enqueue(struct queue *p, struct process data)
{
    if(isfull(p))
    {
        printf("\nQueue is full");
    }
    else{
        p->rear=(p->rear+1)%MAX;
        p->q[p->rear]=data;
    }
}

struct process dequeue(struct queue *p)
{
    struct process data;
    if(isempty(p))
    {
        printf("\nQueue empty");

    }
    else{
        p->front=(p->front+1)%MAX;
        data=p->q[p->front];
        return(data);
    }
}

void display(struct queue *p)
{
    int i;
    if(isempty(p))
    {
    printf("\nQueue Empty");
    return;
    }
    i=(p->front+1)%MAX;
    printf("\nQueue is:");
    while(i!=(p->rear+1)%MAX)
    {
        printf("\n%d",p->q[i]);
        i=(i+1)%MAX;
    }
}
int main()
{
    struct queue q;
    int n,m,t;
    struct process data;
    q.front=q.rear=-1;
    printf("Enter no of process\n");
    scanf("%d",&n);
    printf("Enter process no and cpu time of n processes\n");
    for(int i=0;i<n;i++)
    {
        readprocess(&data);
        enqueue(&q,data);
    }
    printf("Enter the time quantum no\n");
    scanf("%d",&t);
    printf("Enter the no of cycles m\n");
    scanf("%d",&m);




    return 0;
}
