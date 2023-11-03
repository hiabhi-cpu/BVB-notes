#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct Node
{
    int data;
    struct Node *link;
};
typedef struct Node *node;

node insertend(node tail)
{
    node newnode;
    newnode=(node)malloc(sizeof(struct Node));
    if(newnode==NULL)
    {
        printf("No memory allocation\n");
        exit(0);
    }
    scanf("%d",&newnode->data);
    newnode->link=newnode;
    if(tail==NULL)
    {
        tail=newnode;
    }
    else
    {
        newnode->link=tail->link;
        tail->link=newnode;
        tail=newnode;
    }
    return tail;
}

void display(node tail)
{
    node cur;
    if(tail==NULL)
    {
        printf("Circular list is empty\n");
    }
    else
    {
        cur=tail->link;
        while(cur!=tail)
        {
            printf("%d ",cur->data);
            cur=cur->link;
        }
        printf("%d",cur->data);
    }
    printf("\n");
}

int minimum(node tail)
{
    int m=INT_MAX;
    node cur=tail->link;
    while(cur!=tail)
    {
        if(cur->data<m)
            m=cur->data;
        cur=cur->link;
    }
    if(cur->data<m)
    {
        m=cur->data;
    }
    return m;
}

void minimum_pile(node tail,int a)
{
    int i=0;
    int status=0;
    node cur=tail->link;
    while(cur!=tail)
    {
        i++;
        if(cur->data==a)
        {
            status=1;
            break;
        }
        cur=cur->link;
    }
    if(status==0)
    {
        if(cur->data==a)
            i++;
    }
    printf("\nThe pile with minimum stones is %d\n\n",i);
}

void remove_stone(node tail,int a)
{
    node cur=tail->link;
    while(cur!=tail)
    {
        cur->data=cur->data-a;
        cur=cur->link;
    }
    cur->data=cur->data-a;
}



node final_pile(node tail,int a,int b,int c)
{
    node newnode;
    newnode=(node)malloc(sizeof(struct Node));
    newnode->data=a*b*c;
    node cur=tail->link;
    tail->link=newnode;
    newnode->link=cur;
    return tail;
}
int main()
{
    int n;
    printf("Enter the total number of piles of stones\n");
    scanf("%d",&n);
    node tail=NULL;
    printf("Enter the number of stones in each pile\n");
    for(int i=0;i<n;i++)
        tail=insertend(tail);
    int min=minimum(tail);
    int r;
    printf("Enter the number of times to remove stones form piles\n");
    scanf("%d",&r);
    int k;
    printf("\n\nEnter no of stones to be removed from each pile\n");
    printf("Enter a number between 1 to %d\n",min/r);
    scanf("%d",&k);
    for (int i=0;i<r;i++)
    {
        remove_stone(tail,k);
        display(tail);
    }
    int v=minimum(tail);
    minimum_pile(tail,v);
    printf("The final piles are\n");
    tail=final_pile(tail,k,r,n);
    display(tail);
    return 0;
}
