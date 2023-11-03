#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define size 100

typedef struct parking
{
    char color[size];
    int top;
}park;

void push(park *p,char c)
{
    if(p->top==size-1)
        printf("Stack overflow\n");
    else
    {
        p->top++;
        p->color[p->top]=c;

    }
}

void pop(park *p)
{
    if(p->top==-1)
    {

    }
    else
    {
        p->top--;
    }

}

int operation(park *p1,park *p2,int n)
{
    int stat=0,k=2*n-1;
    while(p1->top!=-1 || p2->top!=-1)
    {
        if(p1->color[p1->top]==p2->color[k--])
        {
            stat=1;
            pop(p1);
            pop(p2);
        }
        else
        {
            stat=0;
            break;
        }
    }
    return stat;
}
int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    if(n>0)
    {
        park p1,p2;
        p1.top=-1;
        p2.top=-1;
        int k=(2*n)-1;
        char c;
        for(int i=0; i<(2*n); i++)
        {
            scanf(" %c",&c);
            if(c=='R' || c=='B' || c=='G' || c=='Y')
            {
                push(&p1,c);
                p2.color[k--]=c;
            }
        }
        int l=operation(&p1,&p2,n);
        if(l==1)
        {
            printf("Valid parking\n");
        }
        else
        {
            printf("Invalid parking\n");
        }
    }

    return 0;
}
