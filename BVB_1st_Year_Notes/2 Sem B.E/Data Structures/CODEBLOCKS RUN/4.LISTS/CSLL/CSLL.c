#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *link;
};
typedef struct Node *node;

node newnode,temp,head,tail;


node insert_end_csll(node tail);
node insert_front_csll(node tail);
void display_csll(node tail);
node delete_front_csll(node tail);


int main()
{
    int choice,count;
    tail=NULL;
    while(1)
    {
        printf("\n1.INSERT_END\n2.DISPLAY\n3.INSERT_BEGIN\n4.DELETE_END\n5.DELETE_FRONT\n6.COUNT_NODES\n7.SEARCH_NODE\n8.SEARCH_AND_DELETE\n9.INSERT_POSITION\n10.EXIT\n");
        printf("\nEnter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            tail=insert_end_csll(tail);
            break;
        case 2:
            display_csll(tail);
            break;
        case 3:
            tail=insert_front_csll(tail);
            break;
     /*   case 4:
            head=delete_end(newnode);
            break;
       */ case 5:
            tail=delete_front_csll(tail);
            break;
      /*  case 6:
            count=count_nodes(head);
            printf("Number of nodes are %d\n",count);
            break;
        case 7:
            search_node(head);
            break;
        case 8:
            head=search_and_delete(newnode);
            break;
        case 9:head=insert_position(newnode);
            break;
    */    case 10:
            exit(0);
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}

node create_node()
{
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
    printf("\nEnter int data\n");
    scanf("%d",&newnode->data);
    newnode->link=newnode;
    return newnode;
}

node insert_end_csll(node tail)
{
    newnode=create_node();
    newnode=read_details(newnode);
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


node insert_front_csll(node tail)
{
    node cur,newnode;
    newnode=create_node();
    newnode=read_details(newnode);
    if(tail==NULL)
    {
        tail=newnode;

    }
    else
    {
        newnode->link=tail->link;
        tail->link=newnode;
    }
    return tail;
}


void display_csll(node tail)
{
    node cur;
    if(tail==NULL)
    {
        printf("Circular list is empty\n");
    }
    else
    {
        cur=tail;
        do
        {
            cur=cur->link;
            printf("%d->",cur->data);
        }while(cur!=tail);
    }
}



node delete_front_csll(node tail)
{
    node cur;
    if(tail==NULL)
    {
        printf("Circular list empty\n");
    }
    else if(tail->link==tail)
    {
        printf("Deleted %d\n",tail->data);
        free(tail);
        tail=NULL;
    }
    else
    {
        cur=tail->link;
        tail->link=cur->link;
        printf("Deleted %d\n",cur->data);
        free(cur);
    }
    return tail;
}

