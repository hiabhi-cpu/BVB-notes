#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct details
{
    char name[20];
    int roll;
};
struct Node
{
    struct details details;
    struct Node *link;
};
typedef struct Node *node;


struct Node *head=NULL;


node getnode()
{
    struct Node *newnode;
    newnode=(node)malloc(sizeof(struct Node));
    if(newnode==NULL)
    {
        printf("No memory allocation\n");
        exit(0);
    }
    return newnode;
}


node read_details(node newnode)
{
    scanf(" %s",newnode->details.name);
    scanf("%d",&newnode->details.roll);
    newnode->link=NULL;
    return newnode;
}


node insertend(node newnode)
{
    struct Node *temp;
    newnode=getnode();
    newnode=read_details(newnode);
    if(head==NULL)
    {
        return newnode;
    }
    else
    {
        temp=head;
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=newnode;
        return head;
    }
}
void swap(struct details *a,struct details *b)
{
    struct details temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

node interchange(node newnode)
{
    if(head==NULL||head->link==NULL)
    {
        return head;
    }
    else
    {
        struct Node *temp;
        temp=head;
        while((temp!=NULL)&&(temp->link!=NULL))
        {
            swap(&temp->details,&temp->link->details);
            temp=temp->link->link;
        }
        return head;
    }
}

void display(node head)
{
    struct Node *temp;
    if(head==NULL)
    {
        printf("LL is empty\n");
        exit(0);
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            printf("%s %d\n",temp->details.name,temp->details.roll);
            temp=temp->link;
        }
    }
    printf("\n");
}

int main()
{
    int n;
    scanf("%d",&n);
    if(n<1||n>100)
    {
        printf("Invalid\n");
        exit(0);
    }
    for(int i=0; i<n; i++)
    {
        head=insertend(head);
    }
    head=interchange(head);
    display(head);
    return 0;
}
