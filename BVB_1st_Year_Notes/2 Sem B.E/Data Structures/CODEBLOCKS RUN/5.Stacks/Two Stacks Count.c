#include<stdio.h>
#define SIZE 25
struct stack
{
    int data[SIZE];
    int top;
};

void push (struct stack *sptr,int num)
{
    if (sptr->top==SIZE-1)
        printf("Stack Overflow\n");
    else
    {
        sptr->top++;
        sptr->data[sptr->top]=num;
    }
}

int pop(struct stack *sptr)
{
    int num;
    if(sptr->top==-1)
        printf("Stack Underflow\n");
    else
    {
        num=sptr->data[sptr->top];
        sptr->top--;
    }
    return num;
}

void count(struct stack *sptr1,struct stack *sptr2)
{
    int p1=0,p2=0,n1=0,n2=0,num;
    while(sptr1->top!=-1)
    {
        num=pop(sptr1);
        if(num>0)
            p1++;
        else if(num<0)
            n1++;
    }
    while(sptr2->top!=-1)
    {
        num=pop(sptr2);
        if(num>0)
            p2++;
        else if(num<0)
            n2++;
    }
    printf("Positve count in stack1 = %d\nNegative count in stack1 = %d\nPositve count in stack2 = %d\nNegaitve count in stack2 = %d\n",p1,n1,p2,n2);
}


int main()
{
    struct stack s1,s2,*sptr1,*sptr2;
    sptr1=&s1;
    sptr2=&s2;
    sptr1->top=-1;
    sptr2->top=-1;
    int n,m,num;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        push(sptr1,num);
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d",&num);
        push(sptr2,num);
    }
    count(sptr1,sptr2);
    return 0;
}
