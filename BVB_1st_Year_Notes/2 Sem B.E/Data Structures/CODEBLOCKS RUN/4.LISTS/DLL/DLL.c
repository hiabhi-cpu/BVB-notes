#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *llink;
    struct Node *rlink;
};

struct Node *head,*newnode,*temp,*cur,*prev;
//function prototypes
struct Node* getnode();
struct Node* read_details(struct Node* newnode);
struct Node* insert_end(struct Node* newnode);
struct Node* insert_front(struct Node* newnode);
struct Node* delete_end(struct Node* newnode);
struct Node* delete_front(struct Node* newnode);
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
        printf("\n1.INSERT_END\n2.INSERT_FRONT\n3.DELETE_END\n4.DELETE_FRONT\n5.DISPLAY\n6.DISPLAY_REVERSE\n7.COUNT\n8.SEARCH\n9.EXIT\n");
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
            head=delete_end(head);
            break;
        case 4:
            head=delete_front(head);
            break;
        case 5:
            display(head);
            break;
        case 6:
            display_reverse(head);
            break;
        case 7:
            count=count_nodes(head);
            printf("Number of nodes are %d\n",count);
            break;
        case 8:
            search(head);
            break;
        case 9:
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



struct Node* read_details(struct Node* newnode)
{
    printf("\nEnter int data\n");
    scanf("%d",&newnode->data);
    newnode->rlink=NULL;
    newnode->llink=NULL;
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
        temp=head;
        while(temp->rlink!=NULL)
        {
            temp=temp->rlink;
        }
        temp->rlink=newnode;
        newnode->llink=temp;
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
        newnode->rlink=head;
        head->llink=newnode;
        head=newnode;
    }
    return(head);
}



struct Node* delete_end(struct Node* newnode)
{
    if(head==NULL)
    {
        printf("DLL EMPTY\n");
    }
    else if(head->rlink==NULL)
    {
        printf("Deleted %d\n",head->data);
        free(head);
        head=NULL;
    }
    else
    {
        cur=head;
        while(cur->rlink!=NULL)
        {
            cur=cur->rlink;
        }
        prev=cur->llink;
        prev->rlink=NULL;
        printf("Deleted %d\n",cur->data);
        free(cur);
    }
    return head;
}


struct Node* delete_front(struct Node* newnode)
{
    if(head==NULL)
    {
        printf("DLL EMPTY\n");
    }
    else if(head->rlink==NULL)
    {
        printf("Deleted %d\n",head->data);
        free(head);
        head=NULL;
    }
    else
    {
        cur=head;
        head=head->rlink;
        cur->rlink=NULL;
        printf("Deleted %d\n",cur->data);
        free(cur);
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
        while(temp!=NULL)
        {
            printf("%d-",temp->data);
            temp=temp->rlink;
        }
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
        temp=head;
        while(temp->rlink!=NULL)
        {
            temp=temp->rlink;
        }
        while(temp!=NULL)
        {
            printf("%d-",temp->data);
            temp=temp->llink;
        }
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
        while(cur!=NULL)
        {
            c++;
            cur=cur->rlink;
        }
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
        while(cur!=NULL)
        {
            if(cur->data==key)
            {
                status=1;
                break;
            }
            cur=cur->rlink;
        }
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

