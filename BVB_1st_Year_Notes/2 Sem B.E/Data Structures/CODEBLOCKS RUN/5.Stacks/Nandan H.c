#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100
struct stack
{
    int data[SIZE];
    int top;
};
void push(struct stack *sptr, int num);
int pop(struct stack *sptr);
int peek(struct stack *sptr);

int main()
{
    struct stack *sptr1,*sptr2,s1,s2;
    sptr1=&s1;
    sptr2=&s2;
    sptr1->top=sptr2->top=-1;
    int n,num;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        push(sptr1,num);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        push(sptr2,num);
    }
    int nc=0,c=0;
    while(sptr1->top!=-1&&sptr2->top!=-1)
    {
        if((peek(sptr1))>(peek(sptr2)))
        {
            printf("1 ");
            pop(sptr2);
        }
        else if((peek(sptr1))<(peek(sptr2)))
        {
            printf("2 ");
            pop(sptr1);
        }
        else if((peek(sptr1))==(peek(sptr2)))
        {
            printf("0 ");
            pop(sptr1);
            pop(sptr2);
        }
    }
    if(sptr1->top==-1&&sptr2->top==-1)
        printf("\nTie");
    else if(sptr1->top==-1)
        printf("\nDavid");
    else if(sptr2->top==-1)
        printf("\nJim");
    return 0;
}


void push(struct stack *sptr, int num)
{
    if(sptr->top==SIZE-1)
    {
        printf("Stack Overflow\n");
    }
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
    {
        printf("stack underflow\n");
    }
    else
    {
        num=sptr->data[sptr->top];
        sptr->top--;
    }
    return num;
}


int peek(struct stack *sptr)
{
    int num;
    if(sptr->top==-1)
    {
        printf("Stack empty\n");
    }
    else
    {
        num=sptr->data[sptr->top];
    }
    return num;
}
