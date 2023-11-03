#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>
#define SIZE 30

struct details
{
    char name[20];
    char gender[20];
};

struct queue{
    struct details customer[SIZE];
    int front,rear;
};

void enqueue(struct queue *qptr,struct details customer)
{
    if(qptr->rear==SIZE-1)
        printf("Queue Overflow\n");
    else
    {
        int i=qptr->rear;
        qptr->rear++;
        while(i>=0 && (strcmp(qptr->customer[i].gender,'female')!=0))
        {
            qptr->customer[i+1]=qptr->customer[i];
            i--;
        }
        qptr->customer[i+1]=customer;
    }
}


struct details dequeue(struct queue *qptr)
{
    struct details d;
    if(qptr->front==qptr->rear)
    {
        printf("Queue Underflow\n");
        int num=INT_MAX;
    }
    else
    {
        qptr->front++;
        d=qptr->customer[qptr->front];
    }
    return d;
}

void female(struct queue *qptr)
{
    int a=0;
    if(qptr->front==qptr->rear)
        printf("Queue Empty\n");
    else
        for(int i=qptr->front+1;i<=qptr->rear;i++)
        {
            if(strcmp(qptr->customer[i].gender,'female')==0)
            {
                printf("%s\t",qptr->customer[i].name);
                printf("%s\n",qptr->customer[i].gender);
            }
        }
}

void male(struct queue *qptr)
{
    int a=0;
    if(qptr->front==qptr->rear)
        printf("Queue Empty\n");
    else
        for(int i=qptr->front+1;i<=qptr->rear;i++)
        {
            if(strcmp(qptr->customer[i].gender,'male')==0)
            {
                printf("%s\t",qptr->customer[i].name);
                printf("%s\n",qptr->customer[i].gender);
            }
        }
}




int main()
{
    struct queue *qptr,q;
    qptr=&q;
    qptr->front=qptr->rear=-1;
    int n;
    printf("Enter number of customers\n");
    scanf("%d",&n);
    struct details customer;
    printf("Enter Customer Details\n");
    for(int i=0;i<n;i++)
    {
        printf("NAME\tGENDER\n");
        scanf(" %s",customer.name);
        scanf(" %s",customer.gender);
        enqueue(qptr,customer);
    }
    printf("\nFemale Customer details\n");
    female(qptr);
    printf("\n\nMale Customer details\n");
    male(qptr);
    return 0;
}







