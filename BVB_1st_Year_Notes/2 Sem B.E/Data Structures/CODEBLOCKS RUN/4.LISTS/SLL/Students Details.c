#include<stdio.h>
#include<stdlib.h>


struct Node
{
    char name[20],branch[20];
    float sgpa;
    char grade;
    struct Node *next;
};
typedef struct Node *node;

/*SIZE OF THE ABOVE NODE IS 49
 BYTES
char (1x20) + (1x20)
float 4
char 1
pointer 4
TOTAL 49 BYTES
*/



//function prototypes
node create_node();
node read_details(node newnode);
node insert_end(node newnode);
void display(node head);
void display_s_grade(node head);
node search_and_delete_f_grade(node newnode);
int count_nodes(node head,char grade);

node head=NULL;
node newnode,temp;

int main()
{
    int choice,c;
    char grade;
    while(1)
    {
        printf("Harvard University Screening Test");
        printf("\n1.INSERT_END\n2.DISPLAY_ALL\n3.DISPLAY_S_GRADE\n4.SEARCH_AND_DELETE_F_GRADE\n5.COUNT_GRADES\n6.EXIT\n");
        printf("\nEnter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            head=insert_end(head);
            break;
        case 2:
            display(head);
            break;
        case 3:
            display_s_grade(head);
            break;
        case 4:
            head=search_and_delete_f_grade(newnode);
            break;
        case 5:
            printf("Enter the grade to count for\n");
            scanf(" %c",&grade);
            c=count_nodes(head,grade);
            printf("No of students with %c grade are %d\n",grade,c);
            break;
        case 6:
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
    return (newnode);
}


node read_details(node newnode)
{
    printf("\nEnter Student Details - Name,Branch,Sgpa,Grade\n");
    scanf("%s %s %f %c",newnode->name,newnode->branch,&newnode->sgpa,&newnode->grade);

    newnode->next=NULL;
    return(newnode);
}



node insert_end(node head)
{
    newnode=create_node();
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
        printf("Student Details\n");
        printf("NAME\tBRANCH\tSGPA\tGRADE\n");
        temp=head;
        while(temp!=NULL)
        {
            printf("%s\t%s\t%0.2f\t%c\n",temp->name,temp->branch,temp->sgpa,temp->grade);
            temp=temp->next;
        }
    }
    printf("\n\n");
}

void display_s_grade(node head)
{
    if(head==NULL)
    {
        printf("LL is empty\n");
        exit(0);
    }
    else
    {
        printf("Student Details\n");
        printf("NAME\tBRANCH\tSGPA\tGRADE\n");
        temp=head;
        while(temp!=NULL)
        {
            if(temp->grade=='S')
            {
                printf("%s\t%s\t%0.2f\t%c\n",temp->name,temp->branch,temp->sgpa,temp->grade);
            }
        temp=temp->next;
        }
    }
    printf("\n\n");
}






node search_and_delete_f_grade(node newnode)
{
    int status=0;
    node cur,prev,temp;
    if(head==NULL)
    {
        printf("Singly linked list empty\n");
    }
    else if(head->grade=='F')
    {
        printf("Deleted %s\n",head->name);
        temp=head;
        head=head->next;
        free(temp);
    }
    else
    {
        prev=NULL;
        cur=head;
        while(cur!=NULL)
        {
            if(cur->grade=='F')
            {
                status=1;
                break;
            }
            prev=cur;
            cur=cur->next;
        }
        if(status==1)
        {
            prev->next=cur->next;
            printf("Deleted %s\n",cur->name);
            free(cur);
        }
        else
        {
            printf("Students with F grade not found\n");

        }
    }
    return head;
}


int count_nodes(node head,char grade)
{
    int c=0;
    node cur;
    if(head==NULL)
    {
        return c;
    }
    else
    {
        cur=head;
        while(cur!=NULL)
        {
            if(cur->grade==grade)
            {
                c++;
            }
            cur=cur->next;
        }
    }
    return c;
}
