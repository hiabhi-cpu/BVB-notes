#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define SIZE 30

struct details
{
    char name[20];
    char type[20];
    int amount;
};

struct queue{
    struct details student[SIZE];
    int front,rear;
};

void enqueue(struct queue *qptr,struct details detail)
{
    if(qptr->rear==SIZE-1)
        printf("Queue Overflow\n");
    else
    {
        qptr->rear++;
        qptr->student[qptr->rear]=detail;
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
        d=qptr->student[qptr->front];
    }
    return d;
}

int s_term(struct queue *qptr)
{
    int a=0;
    if(qptr->front==qptr->rear)
        printf("Queue Empty\n");
    else
        for(int i=qptr->front+1;i<=qptr->rear;i++)
        {
            if(qptr->student[i].amount<=5000)
            {
                printf("%s ",qptr->student[i].name);
                printf("%s ",qptr->student[i].type);
                printf("%d\n",qptr->student[i].amount);
                a+=qptr->student[i].amount;
            }
        }
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
            if(qptr->student[i].amount>5000&&qptr->student[i].amount<=100000)
            {
                printf("%s ",qptr->student[i].name);
                printf("%s ",qptr->student[i].type);
                printf("%d\n",qptr->student[i].amount);
                a+=qptr->student[i].amount;
            }
        }
    return a;
}



int main()
{
    struct queue *qptr,q;
    qptr=&q;
    qptr->front=qptr->rear=-1;
    int n;
    printf("Enter number of students\n");
    scanf("%d",&n);
    struct details student;
    printf("Enter Student Details\n");
    for(int i=0;i<n;i++)
    {
        printf("NAME\tLOAN_TYPE\tAMOUNT\n");
        scanf(" %s %s %d",student.name,student.type,&student.amount);
        enqueue(qptr,student);
    }
    printf("\nShort term Application details\n");
    int s=s_term(qptr);
    printf("\nTotal short term loan amount %d\n",s);
    printf("\n\nLong term Application details\n");
    int l=l_term(qptr);
    printf("\nTotal long term loan amount %d\n",l);
    return 0;
}







