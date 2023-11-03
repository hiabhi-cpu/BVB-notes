#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct Node
{
    char plate[20],owner[20];
    int days;
    struct Node *link;
};
typedef struct Node *node;


node newnode,temp,head,prev;


node insertend(node head)
{
    newnode=(node)malloc(sizeof(struct Node));
    scanf(" %s %s %d",newnode->plate,newnode->owner,&newnode->days);
    newnode->link=NULL;
    if(head==NULL)
        head = newnode;
    else
    {
        temp=head;
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=newnode;
    }
    return head;
}


node search_delete(node head,char name1[20],char name2[20])
{
    int status=0;
    prev=NULL;
    temp=head;
    while(temp!=NULL)
    {
        if(strcmp(temp->owner,name1)==0||strcmp(temp->owner,name2)==0)
        {
            status=1;
            break;
        }
        prev=temp;
        temp=temp->link;
    }
    if(status==1)
    {
        prev->link=temp->link;
        free(temp);
    }
    return head;
}

void display(node head)
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%s %s %d\n",temp->plate,temp->owner,temp->days);
        temp=temp->link;
    }
    printf("\n");
}

void display_specific(node head,char specific[20])
{
    int status=0;
    temp=head;
    while(temp!=NULL)
    {
        if(strcmp(temp->plate,specific)==0)
        {

            printf("Car found. Owner name is %s\n",temp->owner);
            status=1;
        }
        temp=temp->link;
    }
    if(status==0)
    {
        printf("Car not found in parking.");
    }
    printf("\n");
}


int main()
{
    int n;
    char name1[20],name2[20],specific[20];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        head=insertend(head);
    }
    display(head);
    scanf(" %s %s",name1,name2);
    for(int i=0;i<n;i++)
    {
        search_delete(head,name1,name2);
    }
    display(head);
    scanf(" %s",specific);
    display_specific(head,specific);
    return 0;
}
