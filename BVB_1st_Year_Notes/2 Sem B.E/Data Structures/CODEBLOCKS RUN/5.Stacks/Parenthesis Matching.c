#include<stdio.h>
#define SIZE 20
struct stack
{
    char data[SIZE];
    int top;
};
void push(struct stack *sptr,char ch)
{
    if(sptr->top==SIZE-1)
        printf("Stack Overflow\n");
    else
    {
        sptr->top++;
        sptr->data[sptr->top]=ch;
    }
}

char pop(struct stack *sptr)
{
    char num;
    if(sptr->top==-1)
        printf("Stack Underflow\n");
    else
    {
        num=sptr->data[sptr->top];
        sptr->top--;
    }
    return num;
}



int validate(char exp[SIZE])
{
    struct stack s,*sptr;
    sptr=&s;
    sptr->top=-1;
    int i=0;
    char ch,popped;
    while((ch=exp[i])!='\0')
    {
        if(ch=='('||ch=='{'||ch=='[')
            push(sptr,ch);
        else if(ch==')')
        {
            if(sptr->top==-1)
                return 0;
            popped=pop(sptr);
            if(popped!='(')
                return 0;
        }
        else if(ch=='}')
        {
            if(sptr->top==-1)
                return 0;
            popped=pop(sptr);
            if(popped!='{')
                return 0;
        }
        else if(ch==']')
        {
            if(sptr->top==-1)
                return 0;
            popped=pop(sptr);
            if(popped!='[')
                return 0;
        }
        i++;
    }
    if(sptr->top!=-1)
        return 0;
    else if(sptr->top==-1)
        return 1;
}


int main()
{
    char exp[SIZE];
    printf("Enter expression:");
    scanf(" %s",exp);
    int v=validate(exp);
    if(v==1)
        printf("Valid\n");
    else
        printf("Invalid\n");
    return 0;
}
