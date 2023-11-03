//C Program array using structures
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:array_using_structures.c
    Date:21/05/2022
*/

#include<stdio.h>
typedef struct student_details
{
    char name[20],srn[20],address[50];
    int roll_no;
    float sgpa;
}STUD;

//function prototypes
void read_details(STUD student[10], int n);
void display_details(STUD student[10], int n);
void highest_sgpa(STUD student[10],int n);
void sort(STUD student[10],int n);

int main()
{
    STUD student[10];
    int n;
    printf("Enter number of students\n");
    scanf("%d",&n);
    read_details(student,n);
    display_details(student,n);
    printf("Details of student with highest SGPA is\n");
    highest_sgpa(student,n);
    printf("Details of student with lowest SGPA is\n");
    lowest_sgpa(student,n);
    printf("Sorted list of students is\n");
    sort(student,n);
    return 0;
}

void read_details(STUD student[10],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter student %d details\n",i+1);
        printf("Name\t\tSRN\tAddress\t\tRoll_No \tSGPA\n");
        scanf("%s\t\t%s\t%s\t\t%d\t%f",student[i].name,student[i].srn,student[i].address,&student[i].roll_no,&student[i].sgpa);
    }
}

void display_details(STUD student[10],int n)
{
    int i;
    printf("Name\t\tSRN\t\tAddress\t\tRoll No\t\tSGPA\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t%s\t%s\t\t%d\t\t%0.2f\n",student[i].name,student[i].srn,student[i].address,student[i].roll_no,student[i].sgpa);
    }
}

void highest_sgpa(STUD student[10],int n)
{
    int index,i;
    float max=0;
    for(i=0;i<n;i++)
    {
        if(student[i].sgpa>max)
        {
            max=student[i].sgpa;
            index=i;
        }
    }
    printf("%s\t%s\t%s\t\t%d\t\t%0.2f\n",student[index].name,student[index].srn,student[index].address,student[index].roll_no,student[index].sgpa);
}

void lowest_sgpa(STUD student[10],int n)
{
    int index,i;
    float min=10;
    for(i=0;i<n;i++)
    {
        if(student[i].sgpa<min)
        {
            min=student[i].sgpa;
            index=i;
        }
    }
    printf("%s\t%s\t%s\t\t%d\t\t%0.2f\n",student[index].name,student[index].srn,student[index].address,student[index].roll_no,student[index].sgpa);
}



void sort(STUD student[10],int n)
{
    int i,j;
    STUD temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(student[j].sgpa>student[j+1].sgpa)
            {
                temp=student[j];
                student[j]=student[j+1];
                student[j+1]=temp;
            }
        }
    }
    display_details(student,n);
}
