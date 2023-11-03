#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

struct stack
{
    char data[SIZE];
    int top;
};


void push(struct stack *sptr, char num)
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


char pop(struct stack *sptr)
{
    char num;
    if(sptr->top==-1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        num=sptr->data[sptr->top];
        sptr->top--;
    }
    return num;
}



int main()
{
    struct stack *sptr,s;
    sptr=&s;
    sptr->top=-1;
    int n,res=1;
    char c;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf(" %c",&c);
        push(sptr,c);
    }
    char p,popped;
    for(int i=0;i<n;i++)
    {
        scanf(" %c",&p);
        popped=pop(sptr);
        if(popped!=p)
        {
            res=0;
            break;
        }
    }
    if(res)
        printf("Valid Parking");
    else
        printf("Invalid Parking");
    return 0;
}
