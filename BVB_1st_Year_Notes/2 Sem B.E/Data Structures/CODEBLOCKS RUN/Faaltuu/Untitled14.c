#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int roll_no;
    char name[20],branch[20];
    struct Node *rlink,*llink;
};
typedef struct Node*node;

node newnode,temp,head,cur,prev;

node insertend(node head)
{
    newnode=(node)malloc(sizeof(struct Node));
    scanf("%d %s %s",&newnode->roll_no,newnode->name,newnode->branch);
    newnode->rlink=newnode->llink=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        cur=head;
        while(cur->rlink!=NULL)
        {
            cur=cur->rlink;
        }
        cur->rlink=newnode;
        newnode->llink=cur;
    }
    return head;
}



void display(node head)
{
    cur=head;
    while(cur!=NULL)
    {
        printf("%d %s %s\n",cur->roll_no,cur->name,cur->branch);
        cur=cur->rlink;
    }
    printf("\n");
}

void display_reverse(node head)
{
    cur=head;
    while(cur->rlink!=NULL)
        cur=cur->rlink;
    while(cur!=NULL)
    {
        printf("%d %s %s\n",cur->roll_no,cur->name,cur->branch);
        cur=cur->llink;
    }
    printf("\n");
}

node update(node head,int a)
{
    int c=0;
    cur=head;
    prev->rlink=cur;
    if(a==1)
    {
        cur=head;
        head=head->rlink;
        free(cur);
    }
    else
    {

        while(cur->rlink!=NULL)
        {
            c++;
            if(c==a)
                break;
            prev=cur;
            cur=cur->rlink;
        }
        prev->rlink=cur->rlink;
        cur->rlink=NULL;
        free(cur);
        cur=prev->rlink;
    }
    return head;
}
int main()
{
    int n;
    head=NULL;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        head=insertend(head);
    display(head);
    display_reverse(head);
    int a,b;
    scanf("%d %d",&a,&b);
    head=update(head,a);
    head=update(head,b);
    display(head);
    return 0;
}
