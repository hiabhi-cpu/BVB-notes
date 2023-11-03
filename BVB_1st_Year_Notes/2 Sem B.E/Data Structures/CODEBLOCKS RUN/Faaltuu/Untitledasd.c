#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define SIZE 100

struct queue
{
    int data[SIZE];
    int front,rear;
};

void enqueue(struct queue *qptr,int num)
{
    if(qptr->rear==SIZE-1)
        printf("Queue Overflow\n");
    else
    {
        qptr->rear++;
        qptr->data[qptr->rear]=num;
    }
}


int krrish(struct queue *qptr)
{
    int k=0;
    for(int i=qptr->front+1;i<=qptr->rear;i++)
    {
        int a=qptr->data[i];
        if(a%3==0)
            k=k+a;
    }
    return k;
}


int shaktiman(struct queue *qptr)
{
    int s=0;
    for(int i=qptr->front+1;i<=qptr->rear;i++)
    {
        int a=qptr->data[i];
        int b=a*a;
        if(b%2==0)
            s=s+a;
    }
    return s;
}


int main() {
    struct queue *qptr,q;
    qptr=&q;
    qptr->front=qptr->rear=-1;
    int n,d;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&d);
        enqueue(qptr,d);
    }
    int k=krrish(qptr);
    int s=shaktiman(qptr);
    if(k>s)
        printf("krrish");
    else if(s>k)
        printf("Shaktiman");
    return 0;
}
