#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 25
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


void pop(struct stack *sptr)
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
        printf("%c ",num);
    }
}


int main() {
    int c,v;
    c=v=0;
    struct stack *vsptr,*csptr;
    struct stack vowel;
    struct stack consonant;
    vsptr=&vowel;
    csptr=&consonant;
    csptr->top=-1;
    vsptr->top=-1;
    int n;
    char string[30],ch;
    scanf("%d",&n);
    if(n<2)
    {
        printf("More number of cards needed.");
        exit(0);
    }
    int i;
    for(i=0;i<n;i++)
    {
        scanf(" %c",&string[i]);
    }
    string[i]='\0';
    for(i=0;string[i]!='\0';i++)
    {
        ch=string[i];
        if(isalpha(ch))
        {
            if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            {
                push(vsptr,ch);
                v++;
            }
            else
            {
                push(csptr,ch);
                c++;
            }
        }
    }
    printf("%d %d\n",v,c);
    if(vsptr->top==-1)
    {
        printf("-1\n");
    }
    else
    {
        while(vsptr->top!=-1)
            pop(vsptr);
    }
    printf("\n");
    if(csptr->top==-1)
    {
        printf("-1\n");
    }
    else
    {
        while(csptr->top!=-1)
            pop(csptr);
    }
    return 0;
}
