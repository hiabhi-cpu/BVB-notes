#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define SIZE 30

struct queue{
    char name[SIZE];
    char type[SIZE];
    int amount[SIZE];
    int front,rear;
};

void enqueue(struct queue *qptr,char n[10],char l[10],int a)
{
    if(qptr->rear==SIZE-1)
        printf("Queue Overflow\n");
    else
    {
        qptr->rear++;
        qptr->name[qptr->rear]=n;
        qptr->type[qptr->rear]=l;
        qptr->amount[qptr->rear]=a;
    }
}


int s_term(struct queue *qptr)
{
    int a=0;
    if(qptr->front==qptr->rear)
        printf("Queue Empty\n");
    else
        for(int i=qptr->front+1;i<=qptr->rear;i++)
        {
            if(qptr->amount[i]<=50000)
            {
                printf("%s ",qptr->name[i]);
                printf("%s ",qptr->type[i]);
                printf("%d\n",qptr->amount[i].);
                a+=qptr->amount[i];
            }
        }
    printf("\n");
    return a;
}

int l_term(struct queue *qptr)
{
    int a=0;
    if(qptr->front==qptr->rear)
        printf("Queue Empty\n");
    else
        for(int i=qptr->front+1;i<=qptr->rear;i++)
        {
            if(qptr->amount[qptr->rear]>50000&&qptr->amount[qptr->rear]<=100000)
            {
                printf("%s ",qptr->name[i]);
                printf("%s ",qptr->type[i]);
                printf("%d\n",qptr->amount[i]);
                a+=qptr->amount[i];
            }
        }
    printf("\n");
    return a;
}



int main()
{
    struct queue *qptr,q;
    qptr=&q;
    qptr->front=qptr->rear=-1;
    int n;
    scanf("%d",&n);
    char name[20],loan[10];
    int amount;
    for(int i=0;i<n;i++)
    {
        scanf(" %s %s %d",name,loan,&amount);
        enqueue(qptr,name,loan,amount);
    }
    printf("Short term Application details\n");
    int s=display(s_term);
    printf("%d",&s);
    printf("Long term Application details\n");
    int l=display(l_term);
    printf("%d",&l);







