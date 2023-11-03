//C Program to declare and create variable for structures.
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:
    Date:04/05/2022
*/
#include<stdio.h>

struct student_details
{
    char name[50];
    int roll_no;
    char srn[20];
    char address[200];
    long phone_no;
    float sgpa;
};

int main()
{
    struct student_details stud1;
    printf("Enter student details\n");
    printf("Name: ");
    gets(stud1.name);
    printf("Roll No: ");
    scanf("%d",&stud1.roll_no);
    printf("SRN: ");
    scanf(" ");
    gets(stud1.srn);
    printf("Address: ");
    gets(stud1.address);
    printf("Phone Number: ");
    scanf("%ld",&stud1.phone_no);
    printf("SGPA: ");
    scanf("%f",&stud1.sgpa);
    printf("The student details are\n");
    printf("%s %d %s %s %ld %0.2f\n",stud1.name,stud1.roll_no,stud1.srn,stud1.address,stud1.phone_no,stud1.sgpa);
    return 0;
}

