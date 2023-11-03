/*
INPUT DATA
RAMU 01FE21BEC268 ECE YES 27 03 2021
RAJU 01FE21BCS365 CSE YES 14 03 2022
GURU 01FE21BEC350 ECE NO 0 0 0
JOSI 01FE21BCS114 CSE NO 0 0 0
BALU 01FE21BEE301 EEE YES 14 12 2021

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    char name[20],usn[20],course[20],registered[10];
    int date,month,year;
    struct node *link;
};
typedef struct node *NODE;

//function prototypes
NODE create_node();
NODE insert_end(NODE head);
void display_all(NODE head);
void display_registered(NODE head);
void display_not_registered(NODE head);

NODE head=NULL;
NODE newnode,temp,cur;

int main()
{
    int choice,n,i;
    while(1)
    {
        printf("STUDENT REGISTRATION PROCESS\n");
        printf("\n1.INSERT_END\n2.DISPLAY_ALL\n3.DISPLAY_REGISTERED_BEFORE_FEB_2022\n4.DISPLAY_NOT_REGISTERED\n5.EXIT\n");
        printf("\nEnter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter no of students\n");
            scanf("%d",&n);
            for(i=1;i<=n; i++)
            {
                head=insert_end(head);
            }
            break;
        case 2:
            display_all(head);
            break;
        case 3:
            display_registered(head);
            break;
        case 4:
            display_not_registered(head);
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}

NODE create_node()
{
    newnode=(NODE)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("No memory allocation\n");
        exit(0);
    }
    else
    {
        printf("\nEnter Student Details - NAME,USN,COURSE,REGISTERED,DATE MONTH YEAR(dd mm yyyy)\n");
        scanf("%s %s %s %s %d %d %d",newnode->name,newnode->usn,newnode->course,newnode->registered,&newnode->date,&newnode->month,&newnode->year);
        newnode->link=NULL;
        return(newnode);
    }
}



NODE insert_end(NODE head)
{
    newnode=create_node();
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
        return(head);
    }
}


void display_all(NODE head)
{
    if(head==NULL)
    {
        printf("Student list is empty\n");
        exit(0);
    }
    else
    {
        printf("Student Details\n");
        printf("NAME\tUSN\t\tCOURSE\tREGISTERED\tDATE_OF_REGISTRATION\n");
        cur=head;
        while(cur!=NULL)
        {
            printf("%s\t%s\t%s\t%s\t\t%d-%d-%d\n",cur->name,cur->usn,cur->course,cur->registered,cur->date,cur->month,cur->year);
            cur=cur->link;
        }
    }
    printf("\n\n");
}

void display_registered(NODE head)
{
    if(head==NULL)
    {
        printf("Student list is empty\n");
        exit(0);
    }
    else
    {
        printf("Student Details\n");
        printf("NAME\tUSN\t\tCOURSE\tREGISTERED\tDATE_OF_REGISTRATION\n");
        cur=head;
        while(cur!=NULL)
        {
            if(cur->year<2022&&cur->year!=0)
            {
                printf("%s\t%s\t%s\t%s\t\t%d-%d-%d\n",cur->name,cur->usn,cur->course,cur->registered,cur->date,cur->month,cur->year);
            }
            else if(cur->year==2022&&cur->month<3)
            {
                printf("%s\t%s\t%s\t%s\t\t%d-%d-%d\n",cur->name,cur->usn,cur->course,cur->registered,cur->date,cur->month,cur->year);
            }
            cur=cur->link;
        }
    }
    printf("\n\n");
}




void display_not_registered(NODE head)
{
    if(head==NULL)
    {
        printf("Student list is empty\n");
        exit(0);
    }
    else
    {
        printf("Student Details\n");
        printf("NAME\tUSN\t\tCOURSE\tREGISTERED\n");
        cur=head;
        while(cur!=NULL)
        {
            if(strcmp(cur->registered,"NO")==0)
            {
                printf("%s\t%s\t%s\t%s\n",cur->name,cur->usn,cur->course,cur->registered);
            }
            cur=cur->link;
        }
    }
    printf("\n\n");
}




