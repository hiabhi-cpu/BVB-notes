#include<stdio.h>
#include<stdlib.h>
#define SIZE 50

struct queue
{
    char data[SIZE];
    int front,rear;
};



void enqueue(struct queue *qptr,char song)
{
    if(qptr->rear==SIZE-1)
        printf("Queue Overflow\n");
    else
    {
        qptr->rear++;
        qptr->data[qptr->rear]=song;
    }
}



int compulsary(struct queue *qptr)
{
    int status=0,h=0,e=0,t=0;
    if(qptr->front==qptr->rear)
    {
        printf("\n\nQueue Empty\n");
        exit(0);
    }
    else
    {
        for(int i=qptr->front+1;i<=qptr->rear;i++)
        {
            if(qptr->data[i]=='H')
                h++;
            else if(qptr->data[i]=='E')
                e++;
            else if(qptr->data[i]=='T')
                t++;
        }
        if(h>=2&&e>0&&t>0)
            status=1;
    }
    return status;
}


int kannada(struct queue *qptr)
{
    int status=1;
    for(int i=qptr->front+1;i<=qptr->rear;i++)
    {
        if(qptr->data[i]=='K')
        {
            status=0;
            if(qptr->data[i]=='K'&&qptr->data[i+1]=='K'&&qptr->data[i+2]=='K')
            {
                status=1;
                break;
            }
        }
    }
    return status;
}



int main()
{
    struct queue *qptr,q;
    qptr=&q;
    qptr->front=qptr->rear=-1;
    int n;
    printf("Enter the number of songs\n");
    scanf("%d",&n);
    char song;
    printf("Enter the language of Song\n");
    printf("Enter K-Kannada\nE-English\nH-Hindi\nT-Telugu\n\n");
    for(int i=0;i<n;i++)
    {
        scanf(" %c",&song);
        enqueue(qptr,song);
    }
    int c=compulsary(qptr);
    int k=kannada(qptr);
    if(c==1&&k==1)
        printf("\n\nCorrect Queuing");
    else
        printf("\n\nWrong Queuing");
    return 0;
}
