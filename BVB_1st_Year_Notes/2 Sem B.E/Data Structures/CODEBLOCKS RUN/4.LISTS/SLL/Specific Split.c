#include<stdio.h>
#include<stdlib.h>
struct Node
{
    char data;
    struct Node *next;
};
typedef struct Node *node;

node newnode,temp;
//function prototypes
node specific_split(node newnode);
node getnode();
node read_details(node newnode);
void display(node head);
node insertend(node newnode);
node insertbeg(node newnode);
node delete_end(node newnode);
node delete_front(node newnode);



node head=NULL;

int main()
{
    int choice,count;
    while(1)
    {
        printf("\n1.INSERT_END\n2.DISPLAY\n3.INSERT_BEGIN\n4.DELETE_END\n5.DELETE_FRONT\n6.SPECIFIC_SPLIT\n7.EXIT\n");
        printf("\nEnter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            head=insertend(newnode);
            break;
        case 2:
            display(head);
            break;
        case 3:
            head=insertbeg(newnode);
            break;
        case 4:
            head=delete_end(newnode);
            break;
        case 5:
            head=delete_front(newnode);
            break;
        case 6:
            specific_split(newnode);
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}

node getnode()
{
    newnode=(node)malloc(sizeof(node));
    if(newnode==NULL)
    {
        printf("No memory allocation\n");
        exit(0);
    }
    return (newnode);
}


node read_details(node newnode)
{
    printf("\nEnter int data\n");
    scanf(" %c",&newnode->data);
    newnode->next=NULL;
    return(newnode);
}



node insertend(node newnode)
{
    newnode=getnode();
    newnode=read_details(newnode);
    if(head==NULL)
    {
        return newnode;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        return(head);
    }
}


void display(node head)
{
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
            printf("%c->",temp->data);
            temp=temp->next;
        }
    }
    printf("\n\n");
}


node insertbeg(node newnode)
{
    newnode=getnode();
    newnode=read_details(newnode);
    if(head==NULL)
    {
        return newnode;
    }
    else
    {
        newnode->next=head;
        head=newnode;
        return(head);
    }
}


node delete_end(node newnode)
{
    node prev=NULL,cur;
    if(head==NULL)
    {
        printf("SLL EMPTY\n");
    }
    else if(head->next==NULL)
    {
        printf("Deleted %c\n",head->data);
        free(head);
        head=NULL;
    }
    else
    {
        prev->next=head;

        while(prev->next->next!=NULL)
        {
            prev=prev->next;
            prev=prev->next->next;
        }
        prev->next->next=NULL;
        printf("Deleted %c\n",prev->next->next->data);

    }
    return head;
}


node delete_front(node newnode)
{
    node cur;
    if(head==NULL)
    {
        printf("SLL EMPTY\n");
    }
    else if(head->next==NULL)
    {
        printf("Deleted %c\n",head->data);
        free(head);
        head=NULL;
    }
    else
    {
        cur=head;
        head=head->next;
        cur->next=NULL;
        printf("Deleted %c\n",cur->data);
        free(cur);
    }
    return head;
}





node specific_split(node newnode)
{
    char ch;
    node prev,cur;
    printf("Enter the characters in newnode\n");
    scanf(" %c",&ch);
    prev=NULL;
    cur=head;
    getnode();
    while(cur!=NULL)
    {
        if(cur->data==ch)
        {

        }
        cur=cur->next;
    }
    return head;
}

