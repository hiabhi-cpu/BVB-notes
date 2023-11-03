#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define SIZE 30

struct queue{
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

int dequeue(struct queue *qptr)
{
    int num;
    if(qptr->front==qptr->rear)
    {
        printf("Queue Underflow\n");
        num=INT_MAX;
    }
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
        for(int i=qptr->front+1;i<=qptr->rear;i++)
            printf("%d ",qptr->data[i]);
    printf("\n");
}
int maximum(struct queue *qptr,struct queue *qptr2, int n)
{  int max=0,num,i;
    for(int i=0;i<n;i++)
    {
        num=dequeue(qptr);
        if(num>max)
        {



            if( i>0)
            {  enqueue(qptr2,max);

            }
            max=num;
        }
        else
        {



            enqueue(qptr,num);

        }

    }
    num=max/2 ;
    enqueue(qptr2,num);
    return max ;
}


int main()
{
    struct queue *qptr,q;
    qptr=&q;
    qptr->front=qptr->rear=-1;
    struct queue *qptr2,q2;
    qptr2=&q2;
    qptr2->front=qptr2->rear=-1;
    int i, n,m,num,max,sum=0;
    scanf("%d %d",&n,&m);
     if(m<=0)
    {
        printf("invalid");
        exit(0);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        enqueue(qptr,num);
    }

     for(i=0;i<m;i++)
     {
         if(i%2==0)
         {
             max=maximum(qptr,qptr2,n);
         }
         else
         {



            max=maximum(qptr2,qptr,n);
         }
         sum+=max ;

     }
      printf("%d",max);

return 0 ;
}
