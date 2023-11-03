#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define SIZE 100

struct queue
{
    int data[SIZE];
    int front,rear;
};

void enqueue(struct queue *qptr,int num)
{
    int i;
    if(qptr->rear==SIZE-1)
        printf("Queue Overflow\n");
    else
    {
        i=qptr->rear;
        qptr->rear++;
        while(i>=0 && qptr->data[i]<=num)
        {
            qptr->data[i+1]=qptr->data[i];
            i--;
        }
        qptr->data[i+1]=num;
    }
}

int dequeue(struct queue *qptr)
{
    int num;
    if(qptr->front==qptr->rear)
        num=INT_MAX;
    else
    {
        qptr->front++;
        num=qptr->data[qptr->front];
    }
    return num;
}
void display(struct queue *qptr)
{
    if(qptr->front==qptr->rear)
        printf("Queue Empty\n");
    else
    {
        for(int i=qptr->front+1; i<=qptr->rear; i++)
        {
            printf("%d->",qptr->data[i]);
        }
        printf("\n");
    }
}

int main()

{
    struct queue *qptr;
    struct queue q;
    qptr=&q;
    qptr->front=qptr->rear=-1;
    int num,ch;
    while(1)
    {
        printf("1.Enqueue 2.Dequeue 3.Display 4.Exit\n");
        printf("Enter choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter data\n");
            scanf("%d",&num);
            enqueue(qptr,num);
            break;
        case 2:
            num=dequeue(qptr);
            if(num==INT_MAX)
                printf("Stack Underflow\n");
            else
                printf("Deleted %d\n",num);
            break;
        case 3:
            display(qptr);
            break;
        case 4:
            exit(0);
        default:
            printf("Enter valid choice\n");
        }
    }
    return 0;
}








