#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* link;
};
typedef struct Node *node;
node newnode,temp,cur,tail,prev;


node insert(node tail)
{
    newnode=(node)malloc(sizeof(struct Node));
    scanf("%d",&newnode->data);
    newnode->link=newnode;
    if(tail==NULL)
        tail=newnode;
    else
    {
        newnode->link=tail->link;
        tail->link=newnode;
        tail=newnode;
    }
    return tail;
}

node update(node tail)
{
    prev=tail->link;
    temp=prev->link;
    while(prev!=tail)
    {
        if(prev->data>temp->data)
        {
            temp=temp->link;
            free(prev);
            prev->link=temp;
        }
        else
        {
            prev=temp;
            temp=temp->link;
        }
    }
    return tail;
}

int display(node tail)
{
    int c=0;
    cur=tail->link;
    while(cur!=tail)
    {
        printf("%d ",cur->data);
        cur=cur->link;
        c++;
    }
    printf("%d\n",cur->data);
    return c+1;
}



int main()
{
    int n,c;
    tail=NULL;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        tail=insert(tail);
    }
    tail=update(tail);
    c=display(tail);
    printf("%d",n-c);
    return 0;
}
