#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct Node
{
    int age;
    struct Node *link;
};
typedef struct Node *node;

node newnode,temp,cur,prev;
node head=NULL;

node insertbeg(node newnode)
{
    newnode=(node)malloc(sizeof(node));
    scanf("%d",&newnode->age);
    if(newnode->age<1||newnode->age>200)
    {
        exit(0);
    }
    newnode->link=head;
    head=newnode;
    return head;
}

int find_max(node head)
{
    int max=0;
    cur=head;
    while(cur!=NULL)
    {
        if(cur->age>=max)
        {
            max=cur->age;
        }
        cur=cur->link;
    }
    return max;
}

node search_delete(node head,int max)
{
    prev=cur=head;
    while(cur!=NULL)
    {
        if(cur->age==max)
        {
            prev->link=cur->link;
            free(cur);
        }
        cur=prev->link;
    }
    return head;
}

void display(node head)
{
    temp=head;
    if(temp==NULL)
    {
        printf("No devotees to worship.");
        exit(0);
    }
    printf("Remaining devotees: ");
    while(temp!=NULL)
    {
        printf("%d ",temp->age);
        temp=temp->link;
    }
}
int main()
{
    int n,i,max;
    scanf("%d",&n);
    if(n<1||n>100)
    {
        exit(0);
    }
    for(i=0;i<n;i++)
    {
        head=insertbeg(head);
    }
    max=find_max(head);
    printf("Allowed for worship: %d\n",max);
    head=search_delete(head,max);
    display(head);
    return 0;
}






/*

node search_and_delete(node newnode)
{
    int status=0,key;
    node cur,prev;
    printf("Enter a number\n");
    scanf("%d",&key);
    if(head==NULL)
    {
        printf("Singly linked list empty\n");
    }
    else if(head->data==key)
    {
        head=delete_front(head);
    }
    else
    {
        prev=NULL;
        cur=head;
        while(cur!=NULL)
        {
            if(cur->data==key)
            {
                status=1;
                break;
            }
            prev=cur;
            cur=cur->link;
        }
        if(status==1)
        {
            prev->link=cur->link;
            printf("Deleted %d\n",cur->data);
            free(cur);
        }
        else
        {
            printf("%d not found\n",key);
        }
    }
    return head;
}

*/








