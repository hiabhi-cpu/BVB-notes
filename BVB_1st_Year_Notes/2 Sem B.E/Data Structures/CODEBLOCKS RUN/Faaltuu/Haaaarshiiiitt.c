#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

struct details
{
    char name[20];
    char gender[10];
    int rank;
};

struct queue
{
    struct details data[SIZE];
    int front,rear;
};

int empty(struct queue *q)
{
    if(q->front<q->rear)
        return 0;
    else
        return 1;
}

void enqueue(struct queue *qptr,struct details d)
{
    int i;
    if(qptr->rear==SIZE-1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        i=qptr->rear;
        qptr->rear++;
        while(i>=0 && qptr->data[i].rank>=d.rank)
        {
            qptr->data[i+1]=qptr->data[i];
            i--;
        }
        qptr->data[i+1]=d;
    }
}

struct details dequeue(struct queue *qptr)
{
    struct details d;
    if(qptr->front==qptr->rear)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        qptr->front++;
        d=qptr->data[qptr->front];
        return d;
    }
}

int main()
{
    struct queue *qptr;
    struct queue q;
    qptr=&q;
    qptr->front=qptr->rear=-1;
    int n,c=0;
    struct details d;
    while(1)
    {
        printf("STUDENT ADD MAADAK 1 HODI, SAAK ANDRA 0 HODI\n");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            printf("STUDENT DETAILS HAAK\n");
            printf("NAME\tRANK\tGENDER HODI\n");
            scanf(" %s %d %s",d.name,&d.rank,d.gender);
            enqueue(qptr,d);
            break;
        case 0:
            printf("\n\n");
            while(!empty(qptr))
            {
                d=dequeue(qptr);
                printf("%s %d %s\n",d.name,d.rank,d.gender);
                c++;
            }
            printf("TOTAL %d STUDENTS ADAR NODU\n",c);
            exit(0);
        default:
            printf("BOOOOOOSDKK NISHE DAG ADI EN?? VALID INPUT HAAK\n\n\n");
        }
    }
    return 0;
}
