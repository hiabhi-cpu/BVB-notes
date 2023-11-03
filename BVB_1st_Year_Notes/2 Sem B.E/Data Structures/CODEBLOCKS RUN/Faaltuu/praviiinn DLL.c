#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node
{
    char data[10];
    struct Node *llink;
    struct Node *rlink;
};

struct Node *head,*newnode,*temp,*cur,*right,*left;
//function prototypes
struct Node* getnode();
struct Node* read_details(struct Node* newnode);
struct Node* insert_end(struct Node* newnode);
void display(struct Node* newnode);
void display_reverse(struct Node* newnode);
struct Node* search_and_delete(struct Node* head);

struct Node* head=NULL;

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        head=insert_end(head);
    }
    display(head);
    search_and_delete(head);
    display_reverse(head);
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
    printf("\nEnter player name\n");
    scanf(" %s",newnode->data);
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
            printf(" %s-",temp->data);
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
            printf(" %s-",temp->data);
            temp=temp->llink;
        }
    }
    printf("\n\n");
}


struct Node* search_and_delete(struct Node* head)
{
    int status=0;
    char key[20];
    printf("Enter the player to search and delete\n");
    scanf(" %s",key);
    if(head==NULL)
    {
        printf("Doubly linked list empty\n");
    }
    else
    {
        cur=head;
        while(cur!=NULL)
        {
            if(strcmp(cur->data,key)==0)
            {
                status=1;
                break;
            }
            cur=cur->rlink;
        }
        if(status==1)
        {
            right=cur->rlink;
            left=cur->llink;
            cur->rlink=right->rlink;
            cur->llink=left->llink;
            free(right);
            free(left);
            right=cur->rlink;
            left=cur->llink;
            right->llink=cur;
            left->rlink=cur;
        }
    }
    return head;
}

