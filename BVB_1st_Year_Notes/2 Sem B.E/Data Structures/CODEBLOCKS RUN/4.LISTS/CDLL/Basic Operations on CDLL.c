#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *llink;
    struct Node *rlink;
};

struct Node *head,*newnode,*temp,*cur,*prev,*next;
//function prototypes
struct Node* getnode();
struct Node* read_details(struct Node* newnode);
struct Node* insert_end(struct Node* newnode);
struct Node* insert_front(struct Node* newnode);
struct Node* delete_end(struct Node* newnode);
struct Node* delete_front(struct Node* newnode);
struct Node* insert_pos(struct Node* newnode);
struct Node* delete_pos(struct Node* newnode);
void display(struct Node* newnode);
void display_reverse(struct Node* newnode);
int count_nodes(struct Node* head);
void search(struct Node* head);

struct Node* head=NULL;

int main()
{
    int choice,count;
    while(1)
    {
        printf("\n1.INSERT_END\n2.INSERT_FRONT\n3.INSERT_POSITION\n4.DELETE_END\n5.DELETE_FRONT\n6.DELETE_POSITION\n7.DISPLAY\n8.DISPLAY_REVERSE\n9.COUNT\n10.SEARCH\n11.EXIT\n");
        printf("\nEnter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            head=insert_end(head);
            break;
        case 2:
            head=insert_front(head);
            break;
        case 3:
            head=insert_pos(head);
            break;
        case 4:
            head=delete_end(head);
            break;
        case 5:
            head=delete_front(head);
            break;
        case 6:
            head=delete_pos(head);
            break;
        case 7:
            display(head);
            break;
        case 8:
            display_reverse(head);
            break;
        case 9:
            count=count_nodes(head);
            printf("Number of nodes are %d\n",count);
            break;
        case 10:
            search(head);
            break;
        case 11:
            exit(0);
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}

struct Node* getnode()
{
    newnode=(struct Node*)malloc(sizeof(struct Node));
    if(newnode==NULL)
    {
        printf("No memory allocation\n");
        exit(0);
    }
    return (newnode);
}



struct Node* read_details(struct Node *newnode)
{
    printf("\nEnter int data\n");
    scanf("%d",&newnode->data);
    newnode->rlink=newnode;
    newnode->llink=newnode;
    return(newnode);
}



struct Node* insert_end(struct Node* newnode)
{
    newnode=getnode();
    newnode=read_details(newnode);
    if(head==NULL)
    {
        return newnode;
    }
    else
    {
        cur=head->llink;
        cur->rlink=newnode;
        newnode->llink=cur;
        newnode->rlink=head;
        head->llink=newnode;
        return head;
    }
}





struct Node* insert_front(struct Node* newnode)
{
    newnode=getnode();
    newnode=read_details(newnode);
    if(head==NULL)
    {
        return newnode;
    }
    else
    {
        cur=head->llink;
        newnode->rlink=head;
        head->llink=newnode;
        newnode->llink=cur;
        cur->rlink=newnode;
        head=newnode;
    }
    return head;
}



struct Node* delete_end(struct Node* newnode)
{
    if(head==NULL)
    {
        printf("CDLL EMPTY\n");
    }
    else if(head->rlink==head)
    {
        printf("Deleted %d\n",head->data);
        free(head);
        head=NULL;
    }
    else
    {
        cur=head->llink;
        prev=cur->llink;
        head->llink=prev;
        prev->rlink=head;
        printf("Deleted %d\n",cur->data);
        free(cur);
    }
    return head;
}


struct Node* delete_front(struct Node* newnode)
{
    if(head==NULL)
    {
        printf("CDLL EMPTY\n");
    }
    else if(head->rlink==head)
    {
        printf("Deleted %d\n",head->data);
        free(head);
        head=NULL;
    }
    else
    {
        cur=head->llink;
        temp=head;
        head=head->rlink;
        cur->rlink=head;
        head->llink=cur;
        printf("Deleted %d\n",temp->data);
        free(temp);
    }
    return head;
}

void display(struct Node* head)
{
    if(head==NULL)
    {
        printf("DLL is empty\n");
    }
    else
    {
        temp=head;
        do
        {
            printf("%d-",temp->data);
            temp=temp->rlink;
        }
        while(temp!=head);
    }
    printf("\n\n");
}


void display_reverse(struct Node* head)
{
    if(head==NULL)
    {
        printf("DLL is empty\n");
    }
    else
    {
        temp=head->llink;
        cur=temp;
        do
        {
            printf("%d-",temp->data);
            temp=temp->llink;
        }while(temp!=cur);
    }
    printf("\n\n");
}


int count_nodes(struct Node* head)
{
    int c=0;
    if(head==NULL)
    {
        return c;
    }
    else
    {
        cur=head;
        do
        {
            c++;
            cur=cur->rlink;
        }
        while(cur!=head);
    }
    return c;
}


void search(struct Node* head)
{
    int status=0,key;
    printf("Enter the number to search\n");
    scanf("%d",&key);
    if(head==NULL)
    {
        printf("Doubly linked list empty\n");
    }
    else
    {
        cur=head;
        do
        {
            if(cur->data==key)
            {
                status=1;
                break;
            }
            cur=cur->rlink;
        }while(cur!=head);
        if(status==1)
        {
            printf("Search Successful,%d found\n",key);
        }
        else
        {
            printf("Search Unsuccessful,%d not found\n",key);
        }
    }
}

struct Node* insert_pos(struct Node* newnode)
{
    int pos;
    printf("Enter position to insert\n");
    scanf("%d",&pos);
    int n=count_nodes(head);
    if(pos==1)
        head=insert_front(head);
    else if(pos>n)
        head=insert_end(head);
    else if(pos>1&&pos<=n)
    {
        cur=head;
        for(int i=1;i<pos;i++)
            cur=cur->rlink;
        temp=cur->llink;
        newnode=getnode();
        newnode=read_details(newnode);
        newnode->llink=temp;
        newnode->rlink=cur;
        temp->rlink=newnode;
        cur->llink=newnode;
    }
    return head;
}


struct Node* delete_pos(struct Node* newnode)
{
    if(head==NULL)
    {
        printf("CDLL List Empty\n");
        return head;
    }
    int pos;
    printf("Enter position to delete\n");
    scanf("%d",&pos);
    int n=count_nodes(head);
    if(pos==1)
        head=delete_front(head);
    else if(pos==n)
        head=delete_end(head);
    else if(pos>1&&pos<n)
    {
        cur=head;
        for(int i=1;i<pos;i++)
            cur=cur->rlink;
        temp=cur->llink;
        next=cur->rlink;
        temp->rlink=next;
        next->llink=temp;
        printf("Deleted %d\n",cur->data);
        free(cur);
    }
    return head;
}
