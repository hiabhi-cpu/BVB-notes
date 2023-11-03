#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100
struct stack
{
    int data[SIZE];
    int top;
};
typedef struct stack *sptr;
void push(sptr sptr);
int pop(struct stack *sptr);
void display(struct stack *sptr);
void peek(struct stack *sptr);


void push(struct stack *sptr)
{
    int num;
    scanf("%d",&num);
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
    struct stack *sptr;
    struct stack s;
    sptr=&s;
    sptr->top=-1;
    int n,num;
    printf("Enter total number of coins\n");
    scanf("%d",&n);
    printf("Enter the coins\n");
    for(int i=0;i<n;i++)
    {
        push(sptr);
    }
    int a,b,c,d,sum=0;
    a=b=c=d=0;
    for(int i=0;i<n;i++)
    {
        num=0;
        num=pop(sptr);
        if(num==1)
            a++;
        else if(num==2)
            b++;
        else if(num==5)
            c++;
        else if(num==10)
            d++;
    }
    int amount=a*1+b*2+c*5+d*10;;
    printf("\n\n1 Rupayee coin %d adav\n2 Rupayee coin %d adav\n5 Rupayee coin %d adav\n10 Rupayee coin %d adav\n",a,b,c,d);

    printf("\nFrankinson ka Total Aukaat izz %d\n",amount);
    return 0;
}
