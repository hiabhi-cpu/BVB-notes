//C Program to compute weighted score based on individual assignments score
/*  Name:Prashanth Aski
    Roll No:1736
    Div:Q
    Program Name:weighted_score_based_on_individual_assignments_score
    Date:17/02/2022
*/
#include<stdio.h>
int main()
{
    int a1,a2,a3,e1,e2,tot;
    printf("enter marks obtained for assignment 1,2,3 respectively\n");
    scanf("%d%d%d",&a1,&a2,&a3);
    printf("enter marks obtained for exam 1 and 2 respectively\n");
    scanf("%d%d",&e1,&e2);
    tot=(a1+a2+a3)*0.1+(e1+e2)*0.35;
    printf("your total marks is %d out of 100\n",tot);
    if (tot>40)
        printf("you are eligible for final exam");
    else
        printf("you are not eligible for final exam");
    return 0;
}
