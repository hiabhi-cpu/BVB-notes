#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct Node
{
    char l,t;
    struct Node *link;
};
typedef struct Node *node;
node newnode,head,temp,cur,prev;

node insert(node head)
{
    newnode=(node)malloc(sizeof(struct Node));
    scanf(" %c %c",&newnode->l,&newnode->t);
    newnode->link=NULL;
    if(head==NULL)
        head=newnode;
    else
    {
        temp=head;
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=newnode;
    }
    return head;
}


void points(node head)
{
    int sum=0,pts=0;
    temp=head;
    while(temp!=NULL)
    {
        if(temp->l=='E'&&temp->t=='P')
            pts=5;
        else if(temp->l=='M'&&temp->t=='P')
            pts=10;
        else if(temp->l=='H'&&temp->t=='P')
            pts=15;
        else if(temp->l=='A'&&temp->t=='P')
            pts=50;
        else if(temp->l=='X'&&temp->t=='P')
            pts=100;
        else if(temp->l=='E'&&temp->t=='L')
            pts=100;
        else if(temp->l=='M'&&temp->t=='L')
            pts=200;
        else if(temp->l=='H'&&temp->t=='L')
            pts=300;
        else if(temp->l=='A'&&temp->t=='L')
            pts=400;
        else if(temp->l=='X'&&temp->t=='L')
            pts=500;
        else
            pts=0;
        sum+=pts;
        temp=temp->link;
    }
    printf("%d\n",sum);
}


void ppoints(node head)
{
    int c=0;
    temp=head;
    while(temp!=NULL)
    {
        if(temp->l=='H'&&temp->t=='L')
            c++;
        temp=temp->link;
    }
    printf("%d\n",c*300);
}


node delete_front(node newnode)
{
    if(head->link==NULL)
    {
        free(head);
        head=NULL;
    }
    else
    {
        cur=head;
        head=head->link;
        cur->link=NULL;
        free(cur);
    }
    return head;
}


node delete(node head)
{
    if (head==NULL)
    {}
    else if(head->l=='E'&&head->t=='P')
    {
        head=delete_front(head);
    }
        prev=NULL;
        cur=head->link;
        while(cur!=NULL)
        {
            if(head->l=='E'&&head->t=='P')
            {
                prev->link=cur->link;
                free(cur);
                cur=prev->link;
                continue;
            }
            else
            {
                prev=cur;
                cur=cur->link;
            }
        }
    return head;
}

void display(node head)
{
    temp=head;
    if(temp==NULL)
        printf("-");
    else
    {
        while(temp!=NULL)
        {
            printf("%c %c ",temp->l,temp->t);
            temp=temp->link;
        }
    }
}
int main() {
    int n,c=0;
    head=NULL;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        else if(n==1)
        {
            head=insert(head);
            c++;
        }
    }
    printf("%d\n",c);
    points(head);
    ppoints(head);
    head=delete(head);
    display(head);
    return 0;
}

