#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 25
struct stack
{
    int data[SIZE];
    int top;
};





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
        printf("Stack underflow\n");
    }
    else
    {
        num=sptr->data[sptr->top];
        sptr->top--;
    }
    return num;
}


int evaluate(struct stack *sptr,char postfix[SIZE])
{
    int op1,op2,i=0;
    char ch;
    while(ch=postfix[i]!='\0')
    {
        if(isdigit(ch))
            push(sptr,ch-'0');
        else
        {
            op2=pop(sptr);
            op1=pop(sptr);
            switch(ch)
            {
                case '+':push(sptr,op1+op2);
                    break;
                case '-':push(sptr,op1-op2);
                    break;
                case '*':push(sptr,op1*op2);
                    break;
                case '/':push(sptr,op1/op2);
                    break;
                case '%':push(sptr,op1%op2);
                    break;
                default:printf("Invalid Expression\n");
                    exit(0);
            }
        }
        i++;
    }
    return (pop(sptr));
}


int main() {
   char name[20];
   scanf(" %s",name);
   printf("%s\n",name);
}
