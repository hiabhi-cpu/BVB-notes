#include<stdio.h>
#include<limits.h>
#define SIZE 100

struct details
{
    char name[20];
    char mode;
    int amount;
};

struct queue
{
    struct details customer[SIZE];
    int front,rear;
};


void enqueue(struct queue *qptr,struct details customer);
struct details dequeue(struct queue *qptr);
void display(struct queue *qptr);


int main()
{
    int n;
    printf("Enter total number of customers\n");
    scanf("%d",&n);
    struct queue *qptr,q,*cqptr,cq;
    qptr=&q;
    cqptr=&cq;
    qptr->rear=qptr->front=-1;
    cqptr->rear=cqptr->front=-1;
    struct details customer;
    printf("Enter the details of %d customers\n",n);
    printf("NAME\tMODE\tAMOUNT\n");
    for(int i=0;i<n;i++)
    {
        scanf("%s %c %d",customer.name,&customer.mode,&customer.amount);
        enqueue(qptr,customer);
    }
    struct details dq_customer;
    int count=0;
    for(int i=0;i<n;i++)
    {
        dq_customer=dequeue(qptr);
        if(dq_customer.mode=='C')
        {
            count++;
            continue;
        }
        else if(dq_customer.mode=='H')
            enqueue(cqptr,dq_customer);
    }
    display(cqptr);
    printf("No of customers with Cheque withdrawal are %d",count);
    return 0;
}



void enqueue(struct queue *qptr,struct details customer)
{
    if(qptr->rear==SIZE-1)
        printf("Queue Overflow\n");
    else
    {
        qptr->rear++;
        qptr->customer[qptr->rear]=customer;
    }
}

struct details dequeue(struct queue *qptr)
{
    struct details dq_customer;
    if(qptr->front==qptr->rear)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        qptr->front++;
        dq_customer=qptr->customer[qptr->front];
    }
    return dq_customer;
}

void display(struct queue *qptr)
{
    if(qptr->front==qptr->rear)
        printf("Queue Empty\n");
    else
        printf("\n\n\nTHE DETAILS OF CUSTOMERS WITH CASH WITHDRAWAL ARE\n");
        for(int i=qptr->front+1;i<=qptr->rear;i++)
            printf("%s\t%c\t%d\n",qptr->customer[i].name,qptr->customer[i].mode,qptr->customer[i].amount);
    printf("\n");
}
