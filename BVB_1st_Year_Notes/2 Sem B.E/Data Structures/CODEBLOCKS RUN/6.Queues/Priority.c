#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define SIZE 100

struct details
{
    char name[10];
    char type;
};

struct queue
{
    struct details data[SIZE];
    int front,rear;
};

void enqueue(struct queue *qptr,struct details d)
{
    int i;
    if(qptr->rear==SIZE-1)
        printf("Queue Overflow\n");
    else
    {
        i=qptr->rear;
        qptr->rear++;
        while(i>=0 && qptr->data[i].type!='N')
        {
            qptr->data[i+1]=qptr->data[i];
            i--;
        }
        qptr->data[i+1]=d;
    }
}

void dequeue(struct queue *qptr)
{
    if(qptr->front==qptr->rear)
    {

    }
    else
    {
        qptr->front++;
        //data=qptr->data[qptr->front];
    }
}
void display(struct queue *qptr)
{
    if(qptr->front==qptr->rear)
        printf("Queue Empty\n");
    else
    {
        for(int i=qptr->front+1; i<=qptr->rear; i++)
        {
            printf(" %s %c",qptr->data[i].name,qptr->data[i].type);
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
    int n;
    struct details data;
    while(1)
    {
        printf("1.Enqueue 2.Dequeue 3.Display 4.Exit\n");
        printf("Enter choice\n");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            printf("Enter name and withdrawal type\n");
            scanf(" %s %c",data.name,&data.type);
            enqueue(qptr,data);
            break;
        case 2:
            dequeue(qptr);
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









